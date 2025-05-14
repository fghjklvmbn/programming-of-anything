// 참고 : https://wikidocs.net/208

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.HashSet;

public class 연습20 {
    public static void main(String[] args){


        // hashmap : 대응관계로 map을 만들어 구분시키는 작업
        HashMap<String, String> a = new HashMap<>();
                                             // key        value
        a.put("people", "사람");    // people   == 사람
        a.put("baseball", "야구");  // baseball == 야구
        
        System.out.println(a.get("people")); // key를 특정하여 value를 출력
        System.out.println(a.get("java")); // 없으므로 null 출력
        System.out.println(a.getOrDefault("java", "자바")); // "자바" 출력
        // getordefault 를 이용하면 key와 value를 정해서 출력 가능


        // containkey : 값이 있는지 없는지 알려줌. 값이 있으면 true, 없으면 false
        System.out.println(a.containsKey("people")); // true
        System.out.println(a.containsKey("park")); // false

        //remove
        a.put("park", "박");
        System.out.println(a.remove("park")); // park 리턴(출력) 및 삭제
        System.out.println(a.size()); // 맵 요소의 개수 리턴, 2 출력
        System.out.println(a.keySet()); // 맵 요소의 key를 출력
        System.out.println(a.toString()); // 요소의 모든 관계 출력

        ArrayList<String> b = new ArrayList<>(a.keySet()); // arraylist으로 a의 key만 전달

        System.out.println(b); // key만 출력

        // 집합
        // hashset : 중복 제외하고 나머지 단어를 하나씩 출력함(순서 없음)
        HashSet<String> n = new HashSet<>(Arrays.asList("a", "b", "c","c", "d"));
        System.out.println(n); // [a,b,c,d]

        // 교집합 의도적으로 생성
        // 제네릭스 사용시 int -> Integer
        HashSet<Integer> a1 = new HashSet<>(Arrays.asList(1,2,3,4,5,6));
        HashSet<Integer> a2 = new HashSet<>(Arrays.asList(4,5,6,7,8,9));


        // d를 의도적으로 아까 생성한 a1을 넣고
        HashSet<Integer> d = new HashSet<>(a1);
        // retainAll()으로 a2를 넣게되면 중복만 꺼내짐
        // retain : 교집합
        d.retainAll(a2);

        System.out.println(d); // {4,5,6} 출력
        
        // 합집합 : union
        // 실상은 addAll() 으로 합집합 하면 된다.
        d.addAll(a2);
        System.out.println(d); // 아까 {4,5,6} 에서 a2를 합집합하여 4,5,6,7,8,9 가 출력됨

        // 문자열을 add 시킨다음에 출력하면 당연하게 나옴.
        // 구현은 ArrayList도 가능했었음
        HashSet<String> e = new HashSet<>();
        e.add("a");
        e.add("b");
        e.add("c");
        System.out.println(e);
    
        // 비교 및 활용
        ArrayList<String> e1 = new ArrayList<>();
        e1.add("a");
        e1.add("b");
        e1.add("c");
        System.out.println(e1);

        // addAll() : addAll으로 park, gyeonghwan 두 항목을 추가 할수 있음
        e.addAll(Arrays.asList("park", "gyeonghwan"));
        System.out.println(e);

        // remove() : 반대로 제거할수 있음
        e.remove("park");
        System.out.println(e);



    }
}
