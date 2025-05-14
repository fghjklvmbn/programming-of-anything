<?php
    include "/Users/baggyeonghwan/Downloads/현장실습/db/conn_db.php";
    
    $register_id = $_POST['register_id'];
    $register_pw = $_POST['register_pw'];

    $sql = "insert into users (user_id, user_pw) values ('id', 'pw')";
    $stmt = $conn->prepare($sql);
    $stmt->bind_param("id", $register_id);
    $stmt->bind_param("pw", $register_pw);
    $stmt->execute();

    if(!$stmt){
        echo "<script>alert('데이터를 집어넣지 못했습니다.'); window.location.href='register_db_insert.php'</script>";
    }

    $stmt->free_result();
    $stmt->close();
    $conn->close();
?>