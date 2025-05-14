<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>
    <form method="post" action="test.php">
        <input type="text" >
    </form>
    <?php
        $a = "Hello World";

        $result1 = str_replace(' ', '', $a);
        $result2 = strrev($result1);

        echo "원래단어 : $a\n";
        echo "공백제거 : $result1\n";
        echo "반대 : $result2\n";

        
    ?>
</body>
</html>