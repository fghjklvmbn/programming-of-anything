package 대학교자바.자바10강;
import java.util.*;

public class 예제3 {
    public static void main(String[] args) {
        ArrayList<String> a = new ArrayList<>();
        Scanner sc = new Scanner(System.in);
        for(int i = 0; i<4; i++){
            System.out.println("이름을 입력하시오 : ");
            String s = sc.next();
            a.add(s);
        }

        for(int i = 0; i<a.size(); i++){
            String name = a.get(i);
            System.out.println(name + "");
        }
        int longestNameIndex = 0;
        for(int i = 0; i<a.size(); i++){
            if(a.get(longestNameIndex).length() < a.get(i).length()){
                longestNameIndex = i;
            }
        }
        System.out.println("\n 가장 긴 이름은 : " + a.get(longestNameIndex));
        sc.close();
    }
}