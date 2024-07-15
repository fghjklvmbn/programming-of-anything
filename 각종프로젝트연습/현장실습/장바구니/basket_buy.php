<?php
    include "/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php";
    $count = $_POST['idx2'];
    $id = $_POST['box'];

    for($i = 0; $i < $count; $i++){
        if(isset($id[$i])){
            //echo "<script>alert('아이디 : $id[$i]  배열 갯수 : $count');</script>";
            $stmt = $conn->prepare("update od set od_state = 1 where od_id = ? ");
            $stmt->bind_param("s", $id[$i]);
            $stmt->execute();
            $stmt->close();
        }
    }
    
    echo "<script>alert('구매가 완료되었습니다.');</script>";
    echo "구매가 완료되었습니다.";
?>