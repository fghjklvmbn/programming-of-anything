<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>회원가입 페이지</title>
    <script src="register_process.js"></script>
</head>
<body>
    <h1>회원가입 페이지</h1>
    <hr><br>

    <form action="register_insert.php" method="post">
        아이디 : <input type="text" name="id" value="id"  required><br>
        패스워드 : <input type="password" name="pass" value="pass" required><br>
        패스워드 확인 : <input type="password" name="pass_re" value="pass_re" required><br>
        <input type="button" value="패스워드 확인" onclick="chk_pw()">
        <input type="submit" value="제출">
    </form>
</body>
</html>
