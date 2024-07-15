<?php
session_start();
include '/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php';

$id = $_POST['id'];
$pw = $_POST['pw'];

$pw_hs = password_hash($pw, PASSWORD_DEFAULT);

//echo "<script>alert('$pw_hs');</script>";


// 입력 검증
if (!isset($id) || !isset($pw)) {
    echo "아이디 혹은 패스워드를 입력하지 않았습니다.";
    exit;
}

// 준비된 문 사용
$stmt = $conn->prepare("SELECT * FROM users WHERE user_id = ? AND user_pw = ?");
$stmt->bind_param("ss", $id, $pw);
$stmt->execute();
$res = $stmt->get_result();

// 쿼리 결과를 배열로 가져오기
if ($res->num_rows > 0) {
    $row = $res->fetch_assoc();
    
    // 세션에 아이디와 패스워드 값 저장
    if(password_verify($row['user_pw'], $pw_hs)){
        $_SESSION['uid'] = $row['user_uid'];
        $_SESSION['id'] = $row['user_id'];
        $_SESSION['pw'] = $pw_hs;
    } else {
        echo "<script>alert('패스워드가 일치하지 않습니다.'); window.location.href='/로그인페이지/login.php;</script>";
        exit;
    }

    echo "<script>alert('로그인 검증이 완료되었습니다.'); window.location.href='/로그인페이지/login_ok.php';</script>";
} else {
    echo "<script>alert('아이디 혹은 비밀번호가 일치하지 않습니다.'); window.location.href='/로그인페이지/login.php';</script>";
}

$stmt->close();
$conn->close();
?>