import java.util.Scanner;
class park{
    public static void sub1(String[] args){
        int a;
        int b;
        String c;
    }
};
class park1 extends park{
    private static void sub2(String[] args){
        String d;
        String e;
    }
};
public class 연습9 {
    public static void main(String[] args) {
        
        // 클래스 정의
        String a;
        park p = new park();
        park1 p1  = new park1();
        //시스템 인풋 스트림 통해 입력 
        Scanner sc = new Scanner(System.in);
        a = sc.nextLine();

        System.out.println(a);

        System.out.println(p instanceof park);
        System.out.println(p1 instanceof park);
        System.out.println(p instanceof park1);
        System.out.println(p1 instanceof park1);
    }
}
