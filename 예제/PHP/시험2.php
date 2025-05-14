<?php
    echo "■ 3과목의 총점과 평균, 등급 구하기\n";
    echo "-----------------------------------------";
    $lang = 92;
    $eng = 93;
    $math = 95;
    $sum = $lang + $eng + $math;
    $avg = ($lang + $eng + $math)/3;
    $test;
    if($avg <= 100 && $avg >= 90 ){
        $test = "A";
    }else if($avg <= 89 && $avg >= 80){
        $test = "B"; 
    }else if($avg <= 79 && $avg >= 70){
        $test = "C";
    }else if($avg <= 69 && $avg >= 60){
        $test = "D";
    }else if(60 > $avg){
        $test = "F";
    }
    echo "\n국어 : $lang\n";
    echo "영어 : $eng\n";
    echo "수학 : $math\n";
    echo "-----------------------------------------\n";
    
    echo "총점 : $sum\n";
    printf("평균 : %0.2f\n", $avg);
    echo "-----------------------------------------\n";

    echo "등급 : $test\n"
?>