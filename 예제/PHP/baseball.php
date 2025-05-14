<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <?php  
        // 오류제어(try catch, if문 사용)
        try {
            //code...
            $input0 = $_POST["input1"];
            $input1 = $_POST["input2"];
            $input2 = $_POST["input3"];
        } catch (\Throwable $th) {
            //throw $th;
            echo "잘못된 접근입니다. send.php를 먼저 작성 해주세요";
            return 1;
        }
        // 오류제어
        if($input0 == null || $input1 == null || $input2 == null){
            echo "잘못된 접근입니다. send.php를 먼저 작성 해주세요";
            return 1;
        }
    
        // 오류 제어
        if($input0 > 9 || $input1 > 9 || $input2 > 9){
            echo "숫자를 잘못 입력하셨습니다. 0부터 9까지의 숫자로 다시한번 입력해주세요!";
            echo "<form action='send.php'>";
            echo "<input type='submit' value='돌아가기'>";
            echo "</form>";
            return 1;
        } else if($input0 < 0 || $input1 < 0 || $input2 < 0){
            echo "숫자를 잘못 입력하셨습니다. 0부터 9까지의 숫자로 다시한번 입력해주세요!";
            echo "<form action='send.php'>";
            echo "<input type='submit' value='돌아가기'>";
            echo "</form>";
            return 1;
        }

        // 랜덤함수
        $a[0] = random_int(0, 9);
        $a[1] = random_int(0, 9);
        $a[2] = random_int(0, 9);

        $ball = 0;
        $strike = 0;
        
        // 스트라이크 스택
        if($input0 == $a[0]){
            $strike++;
        }
        
        if($input1 == $a[1]){
            $strike++;
        }
        
        if($input2 == $a[2]){
            $strike++;
        }
        
        // 볼 스택
        for($i = 0; $i < 3; $i++){
            if($input0 == $a[$i]){
                $ball++;
            }
            if($input1 == $a[$i]){
                $ball++;
            }
            if($input2 == $a[$i]){
                $ball++;
            }
        }

        while($strike == 3 && $ball == 0){
            echo "축하합니다! 승리하셨습니다!";
            echo "<form action='send.php'>";
            echo "<input type='submit' value='돌아가기'>";
            echo "</form>";
            return 0;
        }
        
        echo "---------------결과------------<br>";
        echo "$strike S $ball B<br>";
        echo "다시 시도해주세요!";
    ?>
    <form action='send.php'>
        <input type='submit' value='돌아가기'>
    </form>
</body>
</html>