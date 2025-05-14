import java.util.Scanner;

public class 연습18 {
    public static void main(String[] args){

        Scanner sc = new Scanner(System.in);
        
        // Stringbuffer는 언제든지 추가(append/inserte), 삭제(delate) 가능
        // append : 추가
        
        StringBuffer sb = new StringBuffer();
        sb.append("hello");
        sb.append(" my name is ");
        sb.append(sc.nextLine()); // 입력

        // toString() 으로 문자열 출력
        String result = sb.toString();
        System.out.println(result); // 출력

        // String 단신법 다시 insert 하는 행위는 복잡함.

        String a = new String("");
        a += "park";
        a += "gyeong";
        a += "hwan";
        System.out.println(a);

        // Stringbuilder : 같은 sb인데 비슷하면서 다르다.
        // 차이점은 성능차이와 안정성차이. 빌더가 안정성이 떨어지는 대신 성능이 좋다.
        // 동기화 필요없는 조건이면 빌더가 더 나음.

        StringBuilder sb1 = new StringBuilder();
        sb1.append("hello");
        sb1.append(" my name is ");
        sb1.append("park");

        // insert : sql의 그것
        sb.insert(0, "hello");
        System.out.println(sb);

        // 배열
        String c[] = {"월","화", "수", "목", "금", "토", "일"};
        // exception 발생
        try {
            System.out.println(c[7]);
        } catch (Exception e) {
            System.out.println("예외발생!");
        }
        sc.close();

    }
}
