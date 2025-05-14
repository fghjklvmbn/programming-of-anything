<?php
    $string = 'te @#$%^3289432879st';
    //$string_re = trim($string, '\t@#$%');

    //
    $string = trim($string);
    $string1 = str_replace('@','', $string);
    $string2 = str_replace('#','', $string1);
    $string3 = str_replace('$','', $string2);
    $string4 = str_replace('%','', $string3);
    $string_re1 = str_replace(' ','', $string4);

    // 숫자 체크
    $string_re2 = preg_replace("/[0-9]/", '', $string_re1);
    //$string_re3 = preg_replace("#\&\+\-%@=\/\\\:;,\.'\"\^`~\_|\!\?\*$#<>()\[\]\{\}]/i)", "", $string_re2);

    echo "$string_re2 <br>";
    // echo "<script>alert('$string_re2')</script>";

    $a = password_hash("test", PASSWORD_DEFAULT);
    echo $a;
?>