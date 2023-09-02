import java.util.ArrayList;
import java.util.Scanner;

public class 연습22 {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int money = 0;

        // try catch문 성공적인 활용사례
        try {
            money = sc.nextInt();
            if(money == 0){
                System.out.println("걸어간다.");
            } else if (money > 0) {
                System.out.println("택시를 탄다.");
            }
        } catch (Exception e) {
            System.out.println("잘못된 숫자를 입력하였습니다.\n다시 실행해주세요.");
        }

        // c의 그것

        int money1 = 1000;
        boolean isHadCard = true;

        if(money1 >= 3000 || isHadCard == true){ // || , &&등등 사용 가능
            System.out.println("택시를 타고 간다."); // 해당되므로 출력
        } else {
            System.out.println("걸어간다."); // 비해당
        }

        // ArrayLIst활용해서 contain으로 단어 여부 체크후 출력
        ArrayList<String> a = new ArrayList<>();
        a.add("paper");
        a.add("money");
        a.add("smartphone");
        // 출력
        if(a.contains("money")){
            System.out.println("택시탄다");
        } else {
            System.out.println("걷는다.");
        }

        if(money1 > 1000){ // false 이므로 건너뛰기
            System.out.println("버스를 탄다.");
        } else if (isHadCard == true) { // true이므로 출력
            System.out.println("버스를 탄다");
        } else { // 이전이 맞으므로 여기부분은 건너 뛴다.
            System.out.println("걸어간다.");
        }

    }
}
