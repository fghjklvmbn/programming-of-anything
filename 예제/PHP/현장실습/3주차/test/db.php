<?php
// 데이터베이스 접속정보설정하기
$host = 'localhost';
$username = 'root';
$password = 'oknwsx9283.';
$dbname = 'sample';

// 데이터베이스 접속
$connect = mysqli_connect($host, $username, $password, $dbname) or die("Connect Error: " . $connect->connect_error);

// 강제 인코딩
$connect->set_charset('utf8');
?>