<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/login.php'</script>";
    exit;
}

if (!isset($_GET['id'])) {
    echo "<script>alert('잘못된 요청입니다.'); window.location.href='/게시판/list.php'</script>";
    exit;
}

include '/Users/baggyeonghwan/Downloads/현장실습/db/conn_db.php';
$id = $_GET['id'];

try {
    $sql = "SELECT * FROM not_write WHERE not_write_id = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param('i', $id);
    $stmt->execute();
    $res = $stmt->get_result();

    if ($res->num_rows > 0) {
        $row = $res->fetch_assoc();
        $postname = $row['not_write_postname'];
        $postcontant = $row['not_write_postcontant'];
    } else {
        throw new Exception("글을 찾을 수 없습니다.");
    }
} catch (Exception $e) {
    echo "<script>alert('" . $e->getMessage() . "'); window.location.href='/게시판/list.php'</script>";
    exit;
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>글 수정</title>
</head>
<body>
    <h1>글 수정</h1>
    <form action="/게시판/post_update.php" method="post">
        <input type="hidden" name="id" value="<?php echo htmlspecialchars($id); ?>">
        <label for="postname">제목:</label>
        <input type="text" id="postname" name="postname" value="<?php echo htmlspecialchars($postname); ?>" required>
        <br><br>
        <label for="postcontant">내용:</label>
        <textarea id="postcontant" name="postcontant" rows="20" cols="50" required><?php echo htmlspecialchars($postcontant); ?></textarea>
        <br><br>
        <input type="submit" value="수정하기">
    </form>
    <button onclick="window.location.href='/게시판/post_main.php'">취소</button>
</body>
</html>