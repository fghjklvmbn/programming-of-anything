import java.time.LocalDate;
public class 연습 {
    public static void main(String[] args) {
        System.out.print(7);
        System.out.println(3);
        System.out.println(3.14);
        System.out.println("자바");
        System.out.println("문자열 끼리"+" 연결이 가능하답니다.");
        System.out.println("숫자" + 3 + "과 문자열의 연결도 가능하답니다.");
        LocalDate today = LocalDate.now();
        System.out.println("올해는" + today.getYear() + "년입니다.");
        LocalDate back = today.withYear(1923);
        System.out.println("올해는" + back.getYear() + "년입니다.");
    }
}