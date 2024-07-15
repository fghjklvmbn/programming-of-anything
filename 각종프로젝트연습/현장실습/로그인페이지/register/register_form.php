<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>회원가입</title>
</head>
<body>
    <h1>회원가입 페이지</h1>
    <form action="/register/register_db_insert.php" method="post">
    <tr>
        <br><td>아이디</td><br>
        <input type="text" id="register_id" name="register_id">
    </tr>
    <tr>
        <br><br><td>비밀번호</td><br>
        <input type="password" id="register_pw" name="register_pw">
    </tr>
    <br><br>
    <input type="submit" value="회원가입하기">
    </form>
</body>
</html>