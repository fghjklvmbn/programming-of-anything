package 대학교자바.자바9강;

import java.util.*;

public class 예제5 {
    public static void main(String[] args) {
        HashMap<String, String> dic = new HashMap<>();
        
        dic.put("baby", "아기");
        dic.put("love", "사랑");
        dic.put("apple", "사과");

        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.println("찾고 싶은 단어는?");
            String eng = sc.next();
            if(eng.equals("exit")){
                System.out.println("종료합니다.");
                break;
            }

            String kor = dic.get(eng);
            if(kor == null){
                System.out.println(eng + "없는 단어입니다.");
            } else {
                System.out.println(kor);
            }
        }
        sc.close();
    }
}
