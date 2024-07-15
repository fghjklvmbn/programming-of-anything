<?php
session_start();
include '/Users/baggyeonghwan/Downloads/현장실습/db/conn_db.php';

if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/login.php'</script>";
    exit;
}

$board = $_POST['board'];
$title = $_POST['title'];
$content = $_POST['content'];

try {
    if ($board == '1') {
        $sql = "INSERT INTO not_write (not_id, not_user_uid, not_write_postname, not_write_postcontant) VALUES (1, ?, ?, ?)";
    } elseif ($board == '2') {
        $sql = "INSERT INTO not_write (not_id, not_user_uid, not_write_postname, not_write_postcontant) VALUES (2, ?, ?, ?)";
    } else {
        throw new Exception("잘못된 게시판 선택입니다.");
    }

    $stmt = $conn->prepare($sql);
    $stmt->bind_param('sss', $_SESSION['uid'], $title, $content);
    $stmt->execute();

    echo "<script>alert('글이 성공적으로 등록되었습니다.'); window.location.href='/게시판/post_main.php'</script>";
} catch (Exception $e) {
    echo "<script>alert('" . $e->getMessage() . "'); window.history.back();</script>";
}
?>