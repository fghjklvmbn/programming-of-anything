<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>test</title>
    <style src="test.css"></style>
    <script src="test.js"></script>
</head>
<body>
    <!-- 왼쪽 -->
    <table border="1" height="100" width="800">
        <tr align="center">
            <!-- 첫번째 줄 -->
            <td width="100">test</td>
            <td>test</td>
        </tr>
        <table border="1" height="800" width="800">
            <tr align="center">
                <!-- 두번째 줄 -->
                <td border="1" width="100">test2</td>
                <td id="locked">
                    <!-- td 내 테이블 삽입 -->
                    <table border="1" width="339">
                        <tr colspan="3">
                            <td>test</td>
                            <td>test</td>
                            <td>test</td>
                        </tr>
                    </table>
                </td>

                <td id="unlocked">
                    <table border="1" width="339">
                        <?php
                        for($i=0; $i>10; $i++){
                            echo "<tr colspan='4'>";
                            echo "<td>test</td>";
                            echo "<td>test</td>";
                            echo "<td>test</td>";
                            echo "<td>test</td>";
                            echo "</tr>";
                        }
                        ?>
                    </table>
                </td> 

                <!-- <table border="1" align="left">
                    <tr>
                        <td>asdf</td>
                    </tr>
                </table> -->
                
            </tr>
            
        </table>
        
        

        <!-- <table border="1">
            <tr>
                <td>test1</td>
                <td>test2</td>
                <td>test3</td>
            </tr>
        </table> -->
    </table>

    <!-- 윗쪽 -->
    <!-- <div id="up_left">
        <table border="1" >
            <tr>
                <td>test2</td>
            </tr>
        </table>
    </div> -->

    <!-- 오른쪽 테이블 -->
    <!-- <div id="left-table">
        <table border="1" cellpadding="1">
            <tr>
                <td>test</td>
            </tr>
        </table>
    </div> -->

    <!-- 왼쪽/오른쪽 공간 -->
    
    <!-- <div id='right-table1'>
        <table border='1'>
            <tr>
                <td>test3</td>
            </tr>
        </table>
    </div>
    
    <div id='left-table2'>
        <table border='1' align=left>
            <tr>
                <td>test4</td>
            </tr>
        </table>
    </div> -->

</body>
</html>