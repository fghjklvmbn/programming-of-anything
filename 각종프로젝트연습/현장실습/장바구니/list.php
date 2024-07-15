<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/로그인페이지/login.php'</script>";
    exit;
}

include '/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php';

// goods(상품 정보)
$sql = "SELECT * FROM goods";

try {
    $stmt = $conn->prepare($sql);
    $stmt->execute();
    $res = $stmt->get_result();

    // 데이터 저장 배열 초기화
    $id = $uid = $postname = $postcontant = [];

    $idx = 0;
    if ($res->num_rows > 0) {
        while ($row = $res->fetch_assoc()) {
            $id[$idx] = $row['g_id'];
            $name[$idx] = $row['g_name'];
            $g_cat[$idx] = $row['g_cat'];
            $g_cnt[$idx] = $row['g_cnt'];
            $g_price[$idx] = $row['g_price'];
            $idx++;
        }
    } else {
        throw new Exception("물건이 없습니다. 물건을 만들어 주세요.");
    }

    $stmt->close();
} catch (Exception $e) {
    echo "<script>alert('" . $e->getMessage() . "');</script>";
    $stmt->close();

}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>상품 리스트</title>
</head>
<body>
    <h1>로그인 완료</h1>
    <hr>
    <?php
    try {
        if ($idx > 0) {
            for ($i = 0; $i < $idx; $i++) {
                echo "<li>";
                echo "<form action='/장바구니/basket.php' method=post>";
                echo "<h2> 상품이름 : " . htmlspecialchars($name[$i]) . "</h2>";
                echo "<p> 상품 아이디 : " . nl2br(htmlspecialchars($id[$i])) . "번</p>";
                echo "<p> 수량: " . htmlspecialchars($g_cnt[$i]) . "개 남음</p>";
                echo "<p> 상품 가격: " . htmlspecialchars($g_price[$i]) . "원</p>";
                echo "<p> 상품 카테고리: " . htmlspecialchars($g_cat[$i]) . "</p>";
                echo "<form action=/장바구니/basket.php method=post style='display:inline;'>";
                echo "<input type='hidden' name='id' value='" . htmlspecialchars($id[$i]) . "'>";
                echo "<input type='submit' value='결제'>";
                echo "</form>";
                echo "</form>";
                echo "</li>";
            }
        }
    } catch (\Throwable $th) {
        echo "<li>항목이 없습니다.</li>";
    }
    ?>
    <button onclick="document.location.href='/장바구니/write.php'">상품등록</button>
    
</body>
</html>