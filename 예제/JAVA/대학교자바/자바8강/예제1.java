package 대학교자바.자바8강;

abstract class Calculator{
    public abstract int add(int a, int b);
    public abstract int substract(int a, int b);
    public abstract double average(int[]a);
}

class GoodClac extends Calculator{
    int sum = 0;
    double sum1 = 0;
    
    // 덧셈
    public int add(int a,int b){
        sum = a + b;
        return sum;
    }

    // 나눗셈
    public int substract(int a,int b){
        sum = a - b;
        return sum;
    }
    
    // 평균
    public double average(int []a){
        for(int i = 0; i<a.length; i++){
            sum +=a[i];
        }
        sum1 = sum / a.length;
        return sum1;
    }
}


public class 예제1 {
    public static void main(String[] args){
        GoodClac c = new GoodClac();
        System.out.println(c.add(2, 3));
        System.out.println(c.substract(2, 3));
        System.out.println(c.average(new int[] {2,3,4}));

    }
}
