<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/login.php'</script>";
    exit;
}
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>글쓰기 페이지</title>
</head>
<body>
    <h1>글쓰기 페이지</h1><hr>

    <form action="/게시판/post_insert_class.php" method="post">
        <input type="radio" id="class1" name="board" value="1" required checked> 게시판1
        <input type="radio" id="class2" name="board" value="2" required> 게시판2
        <br><br>

        <label for="title">제목:</label>
        <input type="text" id="title" name="title" required>
        <br><br>

        <label for="content">내용:</label>
        <textarea id="content" name="content" rows="20" cols="50" required></textarea>
        <br><br>

        <input type="submit" value="제출하기">
        <button onclick="window.location.href='/게시판/post_main.php'">메인페이지로 돌아가기</button>
    </form>
</body>
</html>