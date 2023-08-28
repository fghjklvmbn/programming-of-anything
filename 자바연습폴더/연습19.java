import java.util.ArrayList;
import java.util.Arrays;

public class 연습19 {
    public static void main(String[] args){
        // arraylist: 배열을 이용해서 배열리스트처럼 index에 숫자넣고
        // 그 index에 String을 넣거나 int 형식을 넣을수 있음
        // add으로 추가, get으로 꺼내 볼 수 있음
        ArrayList al = new ArrayList();
        al.add(0,"asdf");
        al.add(1,"fdsa");

        System.out.println(al.get(0));
        System.out.println(al.size()); // add되어있는 배열의 총 계를 출력

        System.out.println(al.contains("asdf"));
        // contains() 으로 값이 있는지 true/false으로 볼수 있음.

        System.out.println(al.remove("fdsa")); // "fdsa" 삭제후 true 리턴
        System.out.println(al.remove(0)); // 0번항목 삭제후 "asdf"리턴
        // 해당항목을 삭제하고 true 로 리턴(출력)
        // 삭제시 실패면 false를 리턴

        // 제네릭스(안전성/무결성 오류뜨는거 해결책) c언어의 (int)a 와 비슷한 항목
        // 제네릭스상에선 <int>a 이런식으로 쓰임
        String[] ab = {"123", "124", "125", "126"};
        ArrayList<String> all = new ArrayList<>(Arrays.asList(ab));
        all.add(0,"park");
        all.add(1, "gyeonghwan");

        System.out.println(all.get(1)); // 형 변환 필요없음
        System.out.println(all); // arraylist 에 있는 모든 배열을 출력한다.


    }
}
