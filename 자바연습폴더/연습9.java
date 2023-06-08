// import java.util.Scanner;

// import javax.management.MBeanOperationInfo;
// class car{
//     public static void sub1(String[] args){
//         String modelname = "람보르기니";
//         int modelyear = 2023;
//     }
// };
// class extra extends car{
//     private static void sub2(String[] args){
//         String color = "R";
//         int maxSpeed = 250;
//     }
// };
// public class 연습9 {
//     public static void main(String[] args) {
        
//         // 클래스 정의
//         String a;
//         String b;
//         int age = 18;
//         car.sub1(args);
//         car p = new car();
//         extra p1  = new extra();
//         //시스템 인풋 스트림 통해 입력 
//         Scanner sc = new Scanner(System.in);
//         a = sc.nextLine();
//         b = p1.toString();
//         System.out.println(a);
//         System.out.println(b);
//     }
// }

// 출력 코드 빌드업
class age {
    private int Age;
    public void setAge(int _age){
        Age = _age;
    }
    public String toString() {
        return "나이는 : " + Age; // 리턴값을 나이는 : (숫자) 이렇게 출력되게끔 작성
    }
}

//상속
public class 연습9 extends age{
    public static void main(String[] args){
        age ag = new age();
        ag.setAge(31);

        System.out.println(ag.toString());
    }
}
