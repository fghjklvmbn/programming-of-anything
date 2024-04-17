

<?php  

    $input1 = $_POST["input1"];
    $input2 = $_POST["input2"];
    $input3 = $_POST["input3"];
    
    if($input1 > 9 && $input2 > 9 && $input3 > 9){
        echo "숫자를 잘못 입력하셨습니다. 0부터 9까지의 숫자로 다시한번 입력해주세요!";
    }
    $a[0] = random_int(0, 9);
    $a[1] = random_int(0, 9);
    $a[2] = random_int(0, 9);

    echo "$input1 \n";
    echo "$input2 \n";
    echo "$input3 \n";

    for($i = 0; $i < 3; $i++){
        
    }


    ?>