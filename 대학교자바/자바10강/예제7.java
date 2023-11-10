package 대학교자바.자바10강;
import java.util.*;

class Student { // 학생을 표현하는 클래스
	int id;
	String tel;
	public Student(int id, String tel) {
		this.id = id; 
        this.tel = tel;
	}
    // 미구현
    public int getId(){
        return id;
    }
    public String getTel(){
        return tel;
    }
}

public class 예제7 {
    public static void main(String[] args) {
        HashMap<String, Student> map = new HashMap<>();

        map.put("황기태", new Student(1, "010-111-1111"));
        map.put("이재문", new Student(2, "010-222-2222"));
        map.put("김남윤", new Student(3, "010-333-3333"));

        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.println("검색할 이름?");
            String name = sc.nextLine();
            if(name.equals("exit")){
                break;
            }

            Student stu = map.get(name);
            if(stu == null){
                System.out.println(name + "은 없는 사람입니다.");
            } else {
                System.out.println("id : " + stu.getId() + ", 전화 : "+ stu.getTel());
            }
        }
        sc.close();
    }

    ///"id : " +
    //", 전화 : " +
}
