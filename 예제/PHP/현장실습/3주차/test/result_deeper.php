
<?php

?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
<?php
    session_start();
    $uid = $_POST['user_uid'];
    
    ?>
        <table style="position:sticky;top:0px; background-color:#ffffff" border="1" width="1000" height="135">
            <tr align="center">
                <td width="135"></td>
                <td> <?php echo $_SESSION['user_id' . $uid-1] ?></td>
            </tr>
        </table>


    <table width="1000" height="700" border="1">        
        <tr align="center">
            <td width="135"><?php echo $_SESSION['user_uid' . $uid-1] ?></td>
            <!-- 6줄 독립테이블 -->
            <td>
            <table border="1" align=center>
                <tr align=center>
                    <td width="900" height="135" rowspan="2"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr align=center>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr align=center>
                    <td width="900" height="135">아이디</td>
                    <td width="900" height="135" colspan="2"><?php echo $_SESSION['user_id' . $uid-1] ?></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr align=center>
                    <td width="900" height="135">비밀번호</td>
                    <td width="900" height="135" colspan="2"><?php echo $_SESSION['user_pw' . $uid-1] ?></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    
                </tr>
                <tr align=center>
                    <td width="900" height="135"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
            </table>
            </td>
        </tr>
</body>
</html>