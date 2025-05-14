<?php
    include "/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php";
    $id =  $_POST['id'];
    $pw = $_POST['pass'];
    $pw_re = $_POST['pass_re'];

    if($id == null){
        echo "<script>alert('아이디를 입력하지 않았습니다.'); document.location.href='/로그인페이지/회원가입/register.php';</script>";
        exit;
    } 
    $stmt = $conn->prepare("select user_id from users where user_id='$id'");
    $stmt->execute();
    $res = $stmt->get_result();
    $row = $res->fetch_assoc();
    
    if($res->num_rows > 0){
        echo "<script>alert('중복된 아이디입니다 다시 입력해주세요.');document.location.href='/로그인페이지/회원가입/register.php';</script>";

    }
    $stmt->free_result();
    $stmt->close();
    if($pw === $pw_re){
        $stmt = $conn->prepare("insert into users (user_id, user_pw) values (?, ?)");
        $stmt->bind_param("ss", $id, $pw);
        $stmt->execute();
        $stmt->affected_rows;
        if($stmt->affected_rows != false){
            echo "<script>alert('가입이 완료되었습니다.'); document.location.href='/로그인페이지/login.php';</script>";
        } else {
            echo "<script>alert('가입 실패하였습니다.'); document.location.href='/로그인페이지/회원가입/register.php';</script>";
        }  
        $stmt->close();
    } else {
        echo "<script>alert('비밀번호가 일치하지 않습니다.'); document.location.href='/로그인페이지/회원가입/register.php';</script>";
        exit;
    }
    
?>