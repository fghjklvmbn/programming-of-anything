<?php
    session_start();
    $idx = $_SESSION['idx'];
    // // 테스트코드
    // echo $idx."<br>";
    // for($i=0; $i<$idx; $i++){
    //     echo $_SESSION['user_id' . $i];
    //     echo "<br>";
    // }


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

    //idx 로드
    $idx = $_SESSION['idx'];

    // 
    for ($cnt=0; $cnt<$idx; $cnt++){
        // 세션에 등록된 uid(번호)와 id(이름)을 로드함
        ?>
        <table style="position:sticky;top:0px; background-color:#ffffff" border="1" width="1000" height="135" align=center>
            <tr align="center">
                <td width="135"><?php echo $_SESSION['user_uid'.$cnt] ?></td>
                <td>
                <form method=post action=result_deeper.php>
                <input type=hidden name=user_uid value='<?php echo $_SESSION['user_uid' . $cnt] ?>'>
                <input type=submit name=user_id value='<?php echo $_SESSION['user_id' . $cnt] ?>'>
                </form>
                </td>
            </tr>
        </table>
        <?php
            }
        ?>
    
</body>
</html>