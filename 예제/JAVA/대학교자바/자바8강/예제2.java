package 대학교자바.자바8강;

interface PhoneInterface {
    final int TIMEOUT = 10000;
    // 인터페이스 생성
    void sendcall();
    void receivecall();
    default void printLogo(){
        System.out.println("** phone **");
    }
}

// inplement으로 위 인터페이스를 참고
class SamsungPhone implements PhoneInterface {
    public void sendcall(){
        System.out.println("띠리리리링");
    }
    public void receivecall(){
        System.out.println("전화가 왔습니다.");
    }

    public void flash(){
        System.out.println("전화기에 불이 켜졌습니다.");
    }
}

public class 예제2 {
    public static void main(String[] args){
        SamsungPhone s = new SamsungPhone();
        s.printLogo();
        s.sendcall();
        s.receivecall();
        s.flash();
    }
}
