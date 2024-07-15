<?php
    session_start();
    if($_SESSION['id'] == null && $_SESSION['pw'] == null){
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
    <title>게시판 메인 페이지</title>
</head>
<body>
    <h1>게시판을 선택하세요</h1><hr>
    <button onclick="window.location.href = '/게시판/post_class1_list.php'">게시판1</button>
    <button onclick="window.location.href = '/게시판/post_class2_list.php'">게시판2</button><br>
    <button onclick="window.location.href = '/login_ok.php'">로그인 완료 페이지로 이동하기</button>
</body>
</html>