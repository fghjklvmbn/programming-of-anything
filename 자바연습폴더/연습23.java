import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

class ex extends Exception{

}
public class 연습23 {
    public static void main(String []args) {
        ArrayList<String> a = new ArrayList<>(Arrays.asList("park", "gyeong", "hwan"));
        Scanner sc = new Scanner(System.in);
        int i = sc.nextInt();
        try {
            System.out.println(a.get(i));        
        } catch (Exception e) {
            System.out.println("잘못된 숫자입니다. 다시 실행해주세요.");
        } 
    }
}
