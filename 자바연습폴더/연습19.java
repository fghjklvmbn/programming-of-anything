import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

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

        System.out.println(all.get(1)); // get으로 인덱스 1의 배열을 출력한다.(형 변환 필요없음)
        System.out.println(all); // arraylist 에 있는 모든 배열을 출력한다.



        // aslist 사용시  add로 추가안해도 기존 배열에서 끌어올수 있음
        String[] abc = {"park", "gyeong", "hwan"};
        ArrayList<String> al3 = new ArrayList<>(Arrays.asList(abc));
        al3.add(0,"123");
        al3.add(1, "456");

        System.out.println(al3.toString());


        // 직접 aslist에서 추가 할수 있음
        ArrayList<String> al4 = new ArrayList<>(Arrays.asList("park", "whan"));
        System.out.println(al4);


        // 콤마 넣는 방법
        // 1. 반복문에 콤마만 끼어 넣고 substring으로 마지막 콤마 뺴는 방식
        String park = "";
        for(int i = 0; i<al4.size(); i++){
            park += al4.get(i);
            park += ",";
        }
        park = park.substring(0, park.length()-1);
        System.out.println(park);

        // 2. String.join으로 ","를 넣는 방법

        ArrayList<String> al5 = new ArrayList<>(Arrays.asList("123","234"));
        String hwan = String.join(",", al5);
        // string.join은 배열 하나가 끝나는 동시에 문자열을 대입시켜준다
        System.out.println(hwan);


        // sort 정렬시켜주는 함수 주로 
        // "변수명".sort(comparator.(내림차순)reverseOrder()/(오름차순)natualOrder())
        // 으로 쓴다.
        ArrayList<String> al6 = new ArrayList<>(Arrays.asList("432","194","253"));
        al6.sort(Comparator.naturalOrder());
        System.out.println(al6.get(0));



    }
}
