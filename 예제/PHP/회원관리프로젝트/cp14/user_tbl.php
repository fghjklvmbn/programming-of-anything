<?php 
    include "/Users/baggyeonghwan/Desktop/programming-of-anything/각종프로젝트연습/회원관리프로젝트/lib/connect_db.php";
    echo "<center><p><br><b><h2> user_tbl 테이블 성공여부 판별 </h2></b><hr><p>";

    // db의 값이 true/false으로 나뉨
    if($db){
        echo " [ apm_db ] 데이터베이스 선택 완료 <br>";
    } else {
        echo "<B> apm_db 데이터베이스 선택 실패</B><br>";
        echo "프로그램을 종료합니다.";
        exit;
    }

    $sql = "create table user_tbl(
        no int not null primary key auto_increment,
        userid varchar(12) not null,
        name varchar(12) not null,
        passwd varchar(12),
        sex char(1),
        email varchar(30),
        date datetime,
        ip_addr varchar(30)
    )default charset=utf8;";   


    // 기존 방식으로 구현이 불가능해서 다른방법으로 구현
    // exception이 나는 것을 이용해서 try-catch 문 사용
    try {
        $result = mysqli_query($conn, $sql);
    } catch (\Throwable $th) {
        echo "<hr>";
        echo "<p><font color=red> user_tbl 테이블은 이미 생성되었습니다. <p>";
        echo "mysql에 접속해서 확인하시기 바랍니다.<br>";
        echo ">> <a href=../cp15/main.php> 메인화면으로 이동</a><< <br>";
        echo ">> <a href=../cp14/start.php> 테이블 생성화면으로 이동</a><< <br>";
        exit;
    }

    echo "<hr>";
    echo "<p>성공적으로 user_tbl 테이블을 생성하였습니다. <br><br>";
    echo "이제 레코드를 삽입할 준비가 되었습니다.<hr><br>";
    echo ">> <a href=../cp15/main.php> 메인화면으로 이동</a><< <br>";
    echo ">> <a href=../cp14/start.php> 테이블 생성화면으로 이동</a><< <br>";

    echo "</center>";
    mysqli_close($conn);
?>