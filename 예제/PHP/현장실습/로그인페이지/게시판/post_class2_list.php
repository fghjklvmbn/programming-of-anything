<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/login.php'</script>";
    exit;
}

include '/Users/baggyeonghwan/Downloads/현장실습/db/conn_db.php';
$sql = "SELECT * FROM not_write WHERE not_id = 2";

try {
    $stmt = $conn->prepare($sql);
    $stmt->execute();
    $res = $stmt->get_result();

    // 데이터 저장 배열 초기화
    $id = $uid = $postname = $postcontant = [];

    if ($res->num_rows > 0) {
        while ($row = $res->fetch_assoc()) {
            $id[] = $row['not_write_id'];
            $uid[] = $row['not_user_uid'];
            $postname[] = $row['not_write_postname'];
            $postcontant[] = $row['not_write_postcontant'];
        }
    } else {
        throw new Exception("글이 없습니다. 글을 만들어 주세요.");
    }
} catch (Exception $e) {
    echo "<script>alert('" . $e->getMessage() . "'); window.location.href='/게시판/post_createform.php'</script>";
    exit;
}
?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>게시판2 글 목록</title>
</head>
<body>
    <h1>게시판2 글 목록</h1>
    <ul>
        <?php
        if (count($id) > 0) {
            for ($i = 0; $i < count($id); $i++) {
                echo "<li>";
                echo "<h2>" . htmlspecialchars($postname[$i]) . "</h2>";
                echo "<p>" . nl2br(htmlspecialchars($postcontant[$i])) . "</p>";
                echo "<p>작성자: " . htmlspecialchars($uid[$i]) . "</p>";
                echo "<form action='/게시판/post_delete.php' method='post' onsubmit='return confirm(\"정말 삭제하시겠습니까?\");' style='display:inline;'>";
                echo "<input type='hidden' name='id' value='" . htmlspecialchars($id[$i]) . "'>";
                echo "<input type='submit' value='삭제'>";
                echo "</form>";
                echo "<form action='/게시판/post_edit.php' method='get' style='display:inline;'>";
                echo "<input type='hidden' name='id' value='" . htmlspecialchars($id[$i]) . "'>";
                echo "<input type='submit' value='수정'>";
                echo "</form>";
                echo "</li>";
            }
        } else {
            echo "<li>글이 없습니다.</li>";
        }
        ?>
    </ul>
    <button onclick="window.location.href='/게시판/post_createform.php'">글쓰기</button>
    <button onclick="window.location.href='/게시판/post_main.php'">메인페이지로 돌아가기</button>
</body>
</html>