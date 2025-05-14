<?php
include "/Users/baggyeonghwan/Desktop/programming-of-anything/각종프로젝트연습/회원관리프로젝트/lib/connect_db.php";
include "/Users/baggyeonghwan/Desktop/programming-of-anything/각종프로젝트연습/회원관리프로젝트/lib/session.php";

$sql="select * from user_tbl where userid = '$fuserid' and passwd='$fpasswd'";
$res=mysqli_query($conn, $sql);
$list=mysqli_num_rows($res);

if($list){
    $row = mysqli_fetch_array($res);
    $ses_userid=$row['userid'];
    $ses_pass=$row['passwd'];

    echo "<center><br><font size=4><b> 로그인을 성공하였습니다. </b></font><br><hr>";
}else {
    echo "<cneter><br><h3> 아이디 또는 비밀번호가 틀립니다</h3></center><hr>";
    echo "<script>
    alert('로그인 실패 \\r\\n로그인 화면으로 이동할까요?');
    location.replace('login_form.php')
    </script>";
}
mysqli_close($conn);
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>로그인 성공메시지</title>
</head>
<body>
    <form name="login_form_msq">

    <table width="500" border="0" align="center" cellpadding="5" cellspacing="0">
    <tr bgcolor="#3300CC">
        <td align="center"><font color="#FFFFFF">
        &nbsp;&nbsp; <b>회원 전용 페이지 </b> &nbsp;&nbsp;</font>
        </td>
    </tr>

    <tr height="180" bgcolor="#3300CC">
        <td width="40%" align="center">
            [ <b><?php echo $ses_userid; ?></b> ]
        님의 성공적인 로그인을 축하합니다.            
    </td>
    </tr>

    <tr bgcolor="#CCCCFF"><td align="center">
        <input type="button" name="button" value="로그아웃" onclick="location.replace('logout.php')">
    </td></tr>



    </table>
    </form>
    
</body>
</html>