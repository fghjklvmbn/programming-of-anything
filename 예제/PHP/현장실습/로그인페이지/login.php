<?php
    session_start();
    if(isset($_SESSION['id']) && isset($_SESSION['pw'])){
        echo "<script>alert('로그인되어 있습니다. 로그아웃후 이용해주세요'); window.location.href='/로그인페이지/login_ok.php';</script>";
    }
?>

<html>
<head>
<title>로그인</title>
<meta http-equiv="Pragma" content="no-cache">
<meta http-equiv="Cache-Control" content="no-cache">
<meta http-equiv='X-UA-Compatible' content='IE=edge, chrome=1' />
<script type="text/javascript"></script>
</head>
<body>
<h1>아이디/비밀번호 로그인</h1><br>
<form id="form-login" action='/로그인페이지/login_check.php' method='post'>
    <input type="text" id="id"name="id" placeholder="아이디"><br>
    <input type="password" id="pw" name="pw" placeholder="비밀번호"><br>
    <button type="submit" id="btn-login" >로그인</button>
</form>
<button onclick="document.location.href='/로그인페이지/회원가입/register.php'">회원가입</button>

</body>
</html>