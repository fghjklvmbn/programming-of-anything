<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>회원가입</title>
</head>
<body>
    <center><br><font size=5><b> 회 원 가 입 </b></font><hr>
    [ <a href="login_form.php"> 로그인 </a> ] <p>
    <form name="user_form" action="add_db.php" method="post" onsubmit="return chk_input()">
    <table border="1" width=700 align="center" cellspacing=0 cellpadding="3">
    <tr>
        <td width="696" height="30" colspan="2" bgcolor="blue">&nbsp;<font color="white">
            <b>회원가입</b> [* 표는 반드시 기입할 사항입니다. ] </font>
        </td>
    </tr>

    <!-- 아이디 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> * 아이디 </p></td>
        <td width="80%"><input type="text" name="fuserid" id="fuserid" size="12" 
        maxlength="12" onblur="if(fuserid.value!='') chk_id();">
        <input type="button" name="Button" value=" > 중복검사 < " onClick="chk_id();">
        <font size="2"> (영문과 숫자 12자리까지) </font>

        <script>
            function chk_id(){
                if(user_form.fuserid.value == ''){
                    alert("아이디를 입력해야 검사할 수 있습니다");
                    user_form.fuserid.focus();
                } else {
                    window.open('id_chk.php?fuserid='+user_form.fuserid.value,'IDwin','width=400,height=200');
                }
            }

            function chk_passwd(){
                if(user_form.fpasswd.value != user_form.fpasswd_re.value){
                    alert(" 비밀번호 입력 오류 \r\n -> 비밀번호를 다시 입력하세요.");
                    user_form.fpasswd.value="";
                    user_form.fpasswd_re.value="";
                    user_form.fpasswd.focus();
                    return false;
                }
            }

            function chk_input(){
                if(user_form.fuserid.value==""){
                    alert("아이디를 입력해주세요.");
                    user_form.fuserid.focus();
                    return false;
                } else if(user_form.fname.value==""){
                    alert("이름을 입력해주세요.");
                    user_form.fname.focus();
                    return false;
                } else if(user_form.fpasswd.value==""){
                    alert("비밀번호를 입력해주세요.");
                    user_form.fpasswd.focus();
                    return false;
                } else if(user_form.fpasswd_re.value==""){
                    alert("비밀번호 확인란에 비밀번호를 다시 입력해주세요.");
                    user_form.fpasswd_re.focus();
                    return false;
                } else {
                    return true;
                }
            }
        </script>
        </td>
    </tr>

    <!-- 이름 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> * 이름 </p></td>
        <td width="80%"><input type="text" name="fname" id="fname" size="12" maxlength="10">
        <font size="2"> (5글자까지 가능) </font></td>
    </tr>

    <!-- 비밀번호 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> * 비밀번호 </p></td>
        <td width="80%"><input type="password" name="fpasswd" id="fpasswd" size="13" maxlength="13">
        <font size="2"> (영문과 숫자 혼합 10자리까지) </font></td>
    </tr>

    <!-- 비밀번호 확인 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> * 비밀번호 확인 </p></td>
        <td width="80%"><input type="password" name="fpasswd_re" id="fpasswd_re" size="13" maxlength="13" onblur="chk_passwd()">
        <font size="2"> (비밀번호와 똑같이 입력하세요.) </font></td>
    </tr>

    <!-- 성별 체크 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> 성별 </p></td>
        <td width="80%">
            <input type="radio" name="fsex" value="M" checked> 남
            <input type="radio" name="fsex" value="W"> 여
        </td>
    </tr>

    <!-- 이메일 -->
    <tr>
        <td width="20%" height="30" bgcolor="#FFFF99"><p align="right"> 이메일 </p></td>
        <td width="80%">
            <input type="email" name="femail">
        </td>
    </tr>

    <!-- 서브밋 버튼 / 초기화 버튼 -->
    <tr>
        <td width="696" height="50" colspan="2"><p align="center">
        <input type="submit" name="smt" value=" 가입하기 ">&nbsp;&nbsp;&nbsp;
        <input type="reset" name="rst" value=" 다시작성 ">
    </td>
    </tr>
    </table>
    </form>
</body>
</html>