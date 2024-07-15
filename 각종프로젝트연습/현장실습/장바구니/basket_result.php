<?php
session_start();
if (!isset($_SESSION['id']) || !isset($_SESSION['pw'])) {
    $_SESSION['error'] = "잘못된 접근입니다.";
    echo "<script>alert('아이디 및 패스워드의 정보가 존재하지 않습니다.'); window.location.href='/로그인페이지/login.php'</script>";
    exit;
}

include '/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php';

// goods(상품 정보)
$sql = "SELECT * FROM od where od_state=2";

try {
    $stmt = $conn->prepare($sql);
    $stmt->execute();
    $res = $stmt->get_result();

    // 데이터 저장 배열 초기화
    $idx = [];
    $idx2=0;
    
    if ($res->num_rows > 0) {
        while ($row = $res->fetch_assoc()) {
            //echo"///<br>";
            $ida[$idx2] = $row['od_id'];
            // $id[$idx2] = $row['od_id'];
            $name[$idx2] = $row['od_name'];
            $cnt[$idx2] = $row['od_cnt'];
            $idx2++;
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
    <title>장바구니 리스트</title>
    <script src="basket_result.js"></script>
</head>
<body>
    <h1>장바구니 목록</h1>
    <hr>
    <?php
    try {
        echo "현재 장바구니 아이템 갯수 : $idx2 개 <br><br>";
        echo "<li>";
        echo "<form action='/장바구니/basket_buy.php' method=post>";
        
        // 반복
        if ($idx2 > 0) {
            for ($i = 0; $i < $idx2; $i++) {
                echo "<input type=checkbox name=box[] value='".htmlspecialchars($ida[$i])."'>";
                echo "<p> 장바구니 번호 : " . nl2br(htmlspecialchars($ida[$i])) . " 번</p>";
                echo "<p> 상품 이름 : " . htmlspecialchars($name[$i]) . "</p>";
                echo "<p> 상품 갯수 : " . htmlspecialchars($cnt[$i]) . "개</p>";
                // echo "<form action=/장바구니/basket.php method=post style='display:inline;'>";
                // echo "<input type='hidden' name='id' value='" . htmlspecialchars($id[$i]) . "'>";
                // echo "</form>";
            }
        }

        echo "<input type=hidden name=idx2 value=$idx2>";
        echo "<input type='submit' onload='chk_idx($idx2)' value='결제' >";
        echo "</form>";
        echo "</li>";
        
    } catch (\Throwable $th) {
        echo "<li>항목이 없습니다.</li>";
    }
    ?>
    <form onclick=""></form>
    <!-- <input onload="chk_idx()"> -->
    <hr>
    <button onclick="document.location.href='/로그인페이지/login_ok.php'">홈으로 돌아가기</button>
</body>
</html>