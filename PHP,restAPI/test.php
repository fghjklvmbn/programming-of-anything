<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <script src="server.js"></script>
</head>
<body>
    <p id="asdf">
        테스트 텍스트
    </p>
    <button id="input" type="button" onclick="input()">입력</button>
    <button id="output" type="button" onclick="output()">출력</button>
    <?php
        echo date("y-m-d");
    ?>
    
</body>
</html>