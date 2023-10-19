package 대학교자바.자바6강;


class weapon {
    protected int fire(){
        return 1;
    }
}

class cannon extends weapon{
    // 오버라이딩
    protected int fire(){
        return 10;
    }
}
public class 예제5 {
    public static void main(String[] args){
        weapon weapon; // 
        weapon = new weapon(); // weapon 클래스 직행 
        System.out.println(weapon.fire()); // 1
        weapon = new cannon(); // 상속된(cannon) 클래스 직행
        System.out.println(weapon.fire()); // 10
    }
}
