<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>상품 페이지</title>
    <script src="basket.js"></script>
    <style>
        .no-bgcolor {
            background-color: transparent;
            border: none;
            font-size: 20px;
        }
    </style>
</head>
<body>
    <?php
    include "/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php";
    $id = $_POST['id'];
    
    $stmt = $conn->prepare("select * from goods where g_id = ?");
    $stmt->bind_param("s", $id);
    $stmt->execute();
    $res = $stmt->get_result();

    $row = $res->fetch_assoc();
    $db_name = $row['g_name'];
    $db_cnt = 1;
    $db_price = $db_cnt * $row['g_price'];

    if($db_cnt <= 0){
        echo "<script>alert('0개 이하로 구매할 수 없습니다.');location.href='basket.php'</script>";
        exit;
    }

    // 상품 개수 등 표시(cnt, price = 기존 값)
    echo "<form name='form_m' action='buy.php' method='get'>";
    echo "상품명 : $db_name <input type=hidden name=db_name value=$db_name>";
    echo "<br>";
    echo "개수 : <span id='cnt'>$db_cnt</span><input type='text' name='cnt2' value='1'>";
    echo "<br>";
    echo "가격 : <span id='price'>$db_price</span><input type='text' name='price2' value='$db_price'>";
    echo "<br>";
    echo "<input type='button' value='+' class='no-bgcolor' onclick='plus($db_price)'>";
    echo "<input type='button' value='-' class='no-bgcolor' onclick='minus($db_price)'>";
    echo "<input type=hidden name=id value=$db_name>";
    echo "<input type='submit' value='구매' name=buy>";
    echo "<input type='submit' value='장바구니' name=basket>";
    echo "</form>" ;
    ?>  
</body>
</html>