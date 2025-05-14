<?
//브라우저캐시 초기화
header("Pragma: no-cache");
header("Cache-Control: no-store, no-cache, must-revalidate");
/*
데이터베이스 툴
https://www.heidisql.com/download.php

참고자료
http://jun.hansung.ac.kr/SWP/PHP/PHP%20MySQL%20Select.html
https://opentutorials.org/course/3018/5113
https://developer.mozilla.org/ko/docs/Learn/HTML
https://www.w3schools.com/sql/default.asp



sql 파일넣기
https://haksa.gwangju.ac.kr/~yslee/kdms/mysql_sample_datebase.zip

1. mysql_sample_database.zip 를 다운로드한다.
2. C:\xampp\mysql\bin 에 압축을 해제하고 다음 명령어를 실행한다.
윈도우키+R
cmd 실행
cd C:\xampp\mysql\bin (기본설치경로)
mysql -u root -p < mysql_sample_database.sql
*/

//데이터베이스 접속정보설정하기
$host = 'localhost';
$username = 'root';
$password = '';
$dbname = 'sample';

//데이터베이스 접속
$connect = mysqli_connect($host,$username,$password,$dbname);

//데이터베이스 접속에러시 에러메세지 출력후 종료
if (mysqli_connect_errno())
    die('Connect Error: '.mysqli_connect_error());

$sql = "select * from users limit 10";
//쿼리실행
$result = @mysqli_query($connect, $sql) or die($sql);
$list = @mysqli_fetch_all($result, MYSQLI_ASSOC);
//결과메모리삭제
mysqli_free_result($result);
//데이터베이스 접속종료
mysqli_close($connect);

/*
ob_start();
print_r($list);
$str = ob_get_contents();
ob_end_clean();
$str = preg_replace("/ /", "&nbsp;", $str);
echo nl2br("<span style='font-family:Tahoma, 굴림; font-size:9pt;'>$str</span>");
*/

echo ("<table>
<tr>
    <td>user_uid</td>
    <td>user_id</td>
    <td>user_pw</td>
</tr>
");
for($i=0;$i<count($list);$i++)
{
    echo "<tr>
    <td>".$list[$i]['user_uid']."</td>
    <td>".$list[$i]['user_id']."</td>
    <td>".$list[$i]['user_pw']."</td>
    </tr>
    ";
}
echo ("</table>");
?>