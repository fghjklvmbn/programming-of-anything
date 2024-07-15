<?php
    session_start();
    include "/Users/baggyeonghwan/Downloads/현장실습/로그인페이지/db/conn_db.php";
    $name = $_POST['g_name'];
    $category = $_POST['g_cat'];
    $cnt = $_POST['g_cnt'];
    $price = $_POST['g_price'];
    $username = $_SESSION['id'];

    $stmt = $conn->prepare("SELECT cat_id from category where cat_name=?");
    $stmt->bind_param("s", $category);
    $stmt->execute();
    $res = $stmt->get_result();

    while($res->fetch_row()){
        $db_catid[] = $row['cat_id'];
        $db_catname[] = $row['cat_name'];
        
        if($name == $db_catname){
            echo "<script>alert('카테고리 이름이 중복되었습니다. 다시 시도해주세요'); document.location.href='/장바구니/list.php'; </script>";
            exit;
        }
    }

    if($res->num_rows>0){
        // 결과가 있는 경우
        // 카테고리 검색후 적용
        if($stmt->get_warnings() == false){
            $sql = "INSERT into goods (g_name, g_price, g_cnt, g_cat) values (?, ?, ?, (select cat_id from category where cat_name=?))";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param("ssss", $name, $price, $cnt, $category);
            $stmt->execute();

            if($stmt->get_warnings() == false){
                echo "<script>alert('내용저장에 성공하였습니다.'); document.location.href='/장바구니/list.php'; </script>";    
            } else {
                echo "<script>alert('내용저장에 실패하였습니다 다시 시도해주세요'); document.location.href='/장바구니/list.php'; </script>";
                exit;
            }
            $stmt->free_result();
            $stmt->close();
        } else {
            echo "<script>alert('내용저장에 실패하였습니다 다시 시도해주세요'); document.location.href='/장바구니/list.php'; </script>";
            exit;
        }

    } else {
        // 결과가 없는 경우
        // 카테고리 생성 및 조회
        $stmt = $conn->prepare("INSERT into category (cat_name) values (?)");
        $stmt->bind_param("s", $category);
        $stmt->execute();

        if($stmt->get_warnings() == false){
            $sql = "INSERT into goods (g_name, g_price, g_cnt, g_cat) values (?, ?, ?, (select cat_id from category where cat_name=?))";
            $stmt = $conn->prepare($sql);
            $stmt->bind_param("ssss", $name, $price, $cnt, $category);
            $stmt->execute();
            
            if($stmt->get_warnings() == false){
                echo "<script>alert('내용저장에 성공하였습니다.'); document.location.href='/장바구니/list.php'; </script>";    
            } else {
                echo "<script>alert('내용저장에 실패하였습니다 다시 시도해주세요'); document.location.href='/장바구니/list.php'; </script>";
                exit;
            }
            $stmt->free_result();
            $stmt->close();
        } else {
            echo "<script>alert('내용저장에 실패하였습니다 다시 시도해주세요'); document.location.href='/장바구니/list.php'; </script>";
            exit;
        }
    }
?>