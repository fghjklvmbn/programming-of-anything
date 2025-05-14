<?php
    $host = "localhost";
    $id = "root";
    $pw = "oknwsx9283.";
    $conn = mysqli_connect($host, $id, $pw);
    $db = mysqli_select_db($conn, 'sample');
    mysqli_select_db($conn, 'sample') or die("DB접속 에러"); 
?>