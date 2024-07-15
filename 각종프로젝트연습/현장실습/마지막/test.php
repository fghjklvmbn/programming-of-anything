<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>새 문서</title>
    <style>
        .hover-text {
            font-size: 16px;
            transition: font-size 0.3s ease-in-out;
        }
        .hover-text:hover {
            font-size: 24px;
        }
    </style>
    <script src="test.js"></script>
</head>
<body>
    <form name="form_m" method="post">
        <select name="sel" onchange="select_chang3(this.form);">
            <option value='1'>숨기기</option>
            <option value='2'>보이기</option>
        </select>
        <input type="text" name="col1" id="col" style="display:none; width:50px">
        <br>-----------------------------------------------------------------------------
        <table border="1" cellpadding="1">
            <tr height="20" bgcolor="#ffffff" onmouseover="this.style.background='#ccffff';" onmouseout="this.style.background='#ffffff';">
                <td align="center" width="60">1</td>
                <td align="center" width="60">2</td>
                <td align="center" width="60">3</td>
                <td align="center" width="60">4</td>
                <td align="center" width="60">5</td>
                <td align="center" width="60">6</td>
            </tr>
        </table>
        <br>-----------------------------------------------------------------------------
        <table>
            <tr>
                <td align="center" width="100">
                    <input type="text" name="insco1" value="" onkeyup="pos_set(this.form)">
                </td>
                <td align="center" width="100">
                    <input type="text" name="insco2" value="" onkeyup="pos_set(this.form)">
                </td>
                <td align="center" width="100">
                    <input type="text" name="insco3" value="" onkeyup="pos_set(this.form)">
                </td>
                <td align="center" width="100">
                    <input type="text" name="insco" value="" readonly>
                </td>
            </tr>
        </table>

        <br>-----------------------------------------------------------------------------
        <input type="button" name="win_open" onclick="opener()" value="web open">
        <hr><br>
        <p class="hover-text">touch</p>
        <hr><br>
        <input type="text" placeholder="only number" oninput="this.value = this.value.replace(/[^0-9]/g, '')">only number
        <hr><br>
        <button onclick="showConfirm()">confirm_check</button>


    </form>
    
</body>
</html>