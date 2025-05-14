<?php
session_start();
include "db.php";

$query = "select * from users";
$stmt = $connect->prepare($query);
$idx=0;

if ($stmt) {
    $stmt->execute();
    $res = $stmt->get_result();
    // 결과가 있을 경우
    if ($res->num_rows>0) {
        // 내용만큼 반복
        while($row = $res->fetch_assoc()){
            // 세션 시작 및 세션에 저장
            $_SESSION['user_uid' . $idx] = $row['user_uid'];
            $_SESSION['user_id' . $idx] = $row['user_id'];
            $_SESSION['user_pw' . $idx] = $row['user_pw'];
            $idx++;
        }
        
        for($i = 0; $i<$idx; $i++){
            echo $_SESSION['user_uid' . $i]."<br>";
            echo $_SESSION['user_id' . $i]."<br>";
            echo $_SESSION['user_pw' . $i]."<br>";
        }
        echo "<script>document.location.href='result.php';</script>";
    }
    $stmt->close();
} else {
    echo "쿼리 실행 오류: " . $connect->error;
}
?>