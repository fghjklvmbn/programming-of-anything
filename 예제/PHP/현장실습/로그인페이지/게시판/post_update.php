<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/login.php'</script>";
    exit;
}

if (!isset($_POST['id']) || !isset($_POST['postname']) || !isset($_POST['postcontant'])) {
    echo "<script>alert('잘못된 요청입니다.'); window.location.href='/게시판/post_main.php'</script>";
    exit;
}

include '/Users/baggyeonghwan/Downloads/현장실습/db/conn_db.php';
$id = $_POST['id'];
$postname = $_POST['postname'];
$postcontant = $_POST['postcontant'];

try {
    $sql = "UPDATE not_write SET not_write_postname = ?, not_write_postcontant = ? WHERE not_write_id = ?";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param('ssi', $postname, $postcontant, $id);
    $stmt->execute();

    if ($stmt->affected_rows > 0) {
        echo "<script>alert('글이 성공적으로 수정되었습니다.'); window.location.href='/게시판/post_main.php'</script>";
    } else {
        throw new Exception("글 수정에 실패했습니다.");
    }
} catch (Exception $e) {
    echo "<script>alert('" . $e->getMessage() . "'); window.history.back();</script>";
}
?>