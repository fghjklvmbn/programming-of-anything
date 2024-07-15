<?php
    session_start();
    if($_SESSION['id'] == null && $_SESSION['pw'] == null){
        $_SESSION['error'] = "잘못된 접근입니다.";
        echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/로그인페이지/login.php'</script>";
        exit;
    }
?>
<html>
<head>
<title>로그인 결과</title>
<meta http-equiv="Pragma" content="no-cache">
<meta http-equiv="Cache-Control" content="no-cache">
<meta http-equiv='X-UA-Compatible' content='IE=edge, chrome=1' />
<script>
    window.onload() = function(){
        alert("환영합니다 <?php echo $_SESSION['id'];?> 님");
    }
</script>
</head>
<body>
<h1>로그인 완료</h1>
<button onclick="window.location.href='/로그인페이지/logout.php'">로그아웃</button><br>
<button onclick="window.location.href='/로그인페이지/게시판/post_main.php'">게시판 홈페이지</button>
<button onclick="window.location.href='/장바구니/basket_result.php'">장바구니</button>
<button onclick="window.location.href='/장바구니/list.php'">상품생성 및 상품 리스트</button>
</body>
</html>