<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>로그인 폼</title>
    <script src="/각종프로젝트연습/회원관리프로젝트/cp15/login_form.js"></script>
</head>
<body>
    <center><font size=4><br><b>로그인 하세요.</b></font><hr>
    <br> [ <a href=add_form.php> 회원가입 </a>] </center><br>
    <form name="login_form" action="login.php" method="post" onsubmit="return chk_logform();">
        <table width="350" border="0" align="center" cellpadding="5" cellspacing="0">
            <tr bgcolor="#3300CC">
                <td colspan="2"><font color=#FFFFFF><b>로그인 폼</b></font></td>
            </tr>
            <tr bgcolor="#FFFFCC"><td width="35%" align="right">아이디</td>
                <td align="left"><input type="text" name="fuserid" id="fuserid" size="19"></td>
            </tr>
            <tr bgcolor="#FFFFCC"><td align="right">비밀번호</td>
                <td align="left"><input type="password" name="fpasswd" id="fpasswd" size="20"></td>
            </tr>
            <tr bgcolor="#CCCCFF"><td colspan="2" align="center">
                <input type="submit" name="submit" value="로그인">&nbsp;&nbsp;
                <input type="reset" name="reset" value="취소"></td>
            </tr>
            
        </table>
    </form>
</body>
</html>