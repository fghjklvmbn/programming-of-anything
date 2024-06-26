<?php
    $fuserid=$_POST['fuserid'];
    $fname=$_POST['fname'];
    $fpasswd=$_POST['fpasswd'];
    $fpasswd_re=$_POST['fpasswd_re'];
    $femail=$_POST['femail'];
    $fsex=$_POST['fsex'];

    include "/Users/baggyeonghwan/Desktop/programming-of-anything/각종프로젝트연습/회원관리프로젝트/lib/connect_db.php";

    if($fuserid="" || $fname="" || $fpasswd="" || $fpasswd_re="" || $fpasswd=!$fpasswd_re)
        {
            echo "<script>
                alert('필수 입력사항은 반드시 입력해야 합니다');
                history.back();
            </script>";
            die;
    }

    mysqli_query($conn, "set session chartacter_set_connection=uft8;");
    mysqli_query($conn, "set session chartacter_set_results=uft8;");
    mysqli_query($conn, "set session chartacter_set_client=uft8;");

    $sql = "insert into user_tbl (userid, name, passwd, sex, email, date, ip_addr)";
    $sql .= "values ('$fuserid','$fname', '$fpasswd','$fsex','$femail', now(),'$fuserid')";

    $res=mysqli_query($conn, $sql);

    echo "<center><br><font size=5> 회원등록 성공 <p><hr>";  
    echo "<br> 회원등록을 축하합니다.</font></center>";

    if($res > 0){
        echo "<script>
        alert('등록성공 \\r\\n회원으로 등록되었습니다.');
        location.replace('/각종프로젝트연습/회원관리프로젝트/cp15/login_form.php');
        </script>";
    } else {
        echo "<script>
        alert('등록성공 \\r\\n회원으로 등록을 실패하였습니다.');
        history.back();
        </script>";
    }
    mysqli_close($conn);

?>