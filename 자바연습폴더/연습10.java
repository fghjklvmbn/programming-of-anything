class A{};

// A 클래스 상속
class B extends A{};

//메인 코드
public class 연습10 {
    public static void main(String[] args) {
        //클래스 정의
        A a = new A();
        B b = new B();

        // 상속 후 결과를 boolean 출력(true/false)
        System.out.println(a instanceof A);
        System.out.println(a instanceof B);
        System.out.println(b instanceof A);
        System.out.println(b instanceof B);
    }
}
