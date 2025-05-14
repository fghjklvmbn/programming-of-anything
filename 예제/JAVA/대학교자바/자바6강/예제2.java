package 대학교자바.자바6강;

// 상속
class person{}; // 슈퍼클래스
class Student extends person{};
class researcher extends Student{};
class professor extends researcher{};

public class 예제2 {
    // person으로 연결된 자손 클래스 업캐스팅
    // 업캐스팅을 이용하여 p에 항목 추가
    static void print(person p){
        if(p instanceof person){
            System.out.println("person "); // 첫번째 항목 생성
        }
        if(p instanceof Student){
            System.out.println("Student "); // 두번째 항목 추가
        }
        if(p instanceof researcher){
            System.out.println("researcher "); // 세번째 항목 추가
        }
        if(p instanceof professor){
            System.out.println("professor "); // 네번쨰 항목 추가
        }
    }
    public static void main(String[] args){
        // 출력
        System.out.println("new person() -> \t"); print(new person());
        System.out.println("new Student() -> \t"); print(new Student());
        System.out.println("new researcher() -> \t"); print(new researcher());
        System.out.println("new professor() -> \t"); print(new professor());
    }
}
