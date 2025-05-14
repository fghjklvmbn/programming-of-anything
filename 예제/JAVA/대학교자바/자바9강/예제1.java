package 대학교자바.자바9강;

import java.util.Vector;

public class 예제1 {
    public static void main(String[] args){
        Vector<Integer> v = new Vector<Integer>();
        //0번째부터 시작
        v.add(1);
        v.add(1000);
        v.add(-1);
        v.add(1, 100);

        System.out.println("벡터 내의 요소 객체 수 : " + v.size());
        System.out.println("벡터 내의 현재 용량 : " + v.capacity());
        
        int sum = 0;
        for(int i = 0; i<v.size(); i++){
            int n = v.elementAt(i);
            sum += n;
        }
        System.out.println("정수의 합 : " + sum);

        for(int i =0; i<v.size(); i++){
            int m = v.get(i);
            System.out.println(m);
        }

        
    }
}
