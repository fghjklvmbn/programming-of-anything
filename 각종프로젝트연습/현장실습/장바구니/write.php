<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>상품명 쟉셩</title>
</head>
<body>
    <h1>상품 등록</h1> 
    <hr>
    <form name="form" method="post" action="insert.php">
        상품명 : <input type="text" name="g_name"><br>
        카테고리 : <input type="text" name="g_cat"><br>
        가격 : <input type="number" name="g_price"><br>
        재고 : <input type="number" name="g_cnt"><br>
        <input type="submit" value="저장">
    </form>
    
</body>
</html>