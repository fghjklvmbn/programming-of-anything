<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>주문 완료</title>
    <script>
        window.onload =function() {
            alert('주문이 완료되었습니다. 감사합니다.');
        }
    </script>
</head>
<body>
    <h1>주문이 완료되었습니다.</h1><br>
    <hr>
    <?php
    session_start();
    include "/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php";
    $cnt = $_GET['cnt2'];
    $price = $_GET['price2'];
    $db_name = $_GET['db_name'];
    $user_id = $_SESSION['id'];

    $stmt = $conn->prepare("select * from goods where g_name = ?");
    $stmt->bind_param("s", $db_name);
    $stmt->execute();
    $res = $stmt->get_result();
    $row = $res->fetch_assoc();
    $g_cnt = $row['g_cnt'];
    $stmt->close();

    $stmt = $conn->prepare("select * from users where user_id = ?");
    $stmt->bind_param("s", $user_id);
    $stmt->execute();
    $res = $stmt->get_result();
    $row = $res->fetch_assoc();
    $user_uid = $row['user_uid'];
    $stmt->close();

    if(isset($_GET['buy'])){
        $stmt = $conn->prepare("insert into od (user_uid, od_name, od_cnt, od_state) values (?, ?, ?, '1')");
        $stmt->bind_param("sss", $user_uid, $db_name, $cnt);
        $stmt->execute();
        $stmt->close();
    } else if(isset($_GET['basket'])){
        $stmt = $conn->prepare("insert into od (user_uid, od_name, od_cnt, od_state) values (?, ?, ?, '2')");
        $stmt->bind_param("sss", $user_uid, $db_name, $cnt);
        $stmt->execute();
        $stmt->close();
    }

    $fin_cnt = $g_cnt-$cnt;

    // $all_price = $price * $cnt;

    try {
        $stmt = $conn->prepare("update goods set g_cnt = $fin_cnt where g_name = ?");
        $stmt->bind_param("s", $db_name);
        $stmt->execute();

        echo "구매 물건 : $db_name <br>";
        echo "구매 갯수 : $cnt 개<br>";
        echo "총 금액 : $price 원<br>";
    } catch (\Throwable $th) {
        echo "<script>alert('자료삽입에 문제가 발생하였습니다.');</script>";
    }

    ?>
    <br>
    <button onclick="document.location.href='/로그인페이지/login_ok.php'">메인페이지로 돌아가기</button>
</body>
</html>