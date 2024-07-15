<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>틀 양식</title>
</head>
<body>
    <table width="1000" height="850" border="1">
        <!-- 맨 위쪽 2칸을 의미 -->
        <tr align="center" width="100">
            <td width="100"></td>
            <td></td>
        </tr>

        <!-- 아래쪽 2칸(1칸 테이블)을 의미 -->
        <tr align="center">
            <td height="700"></td>
            <!-- 6줄 독립테이블 -->
            <td>
            <table border="1">
                <tr>
                    <td width="900" height="135" rowspan="2"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr>
                    <td width="900" height="135"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
                <tr>
                    <td width="900" height="135"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                    
                </tr>
                <tr>
                    <td width="900" height="135"></td>
                    <td width="900" height="135" colspan="2"></td>
                    <td width="900" height="135"></td>
                    <td width="900" height="135"></td>
                </tr>
            </table>
            </td>
        </tr>
        
        <?php

        // $limit = 7;
        // $limit1 = 6;

        // for( $i = 0; $i < $limit; $i++ ){
        //     echo "<tr width=100>";

        //     echo "<td></td>";
        //     echo "<td>TEST</td>";
        //     echo "<td>TEST</td>";
        //     echo "<td>TEST</td>";
        //     echo "<td>TEST</td>";
        //     echo "<td>TEST</td>";
            
        //     echo "</tr>";
        // }
        ?>

    </table>
    
</body>
</html>