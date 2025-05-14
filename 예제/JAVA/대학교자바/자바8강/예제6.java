package 대학교자바.자바8강;

public class 예제6 {
    public static void main(String[] args) {
        int n = 10;
        // 박싱
        Integer intObject = n;
        System.out.println("intObject = " + intObject);

        // 언박싱
        int m = intObject + 10;
        System.out.println("m = " + m);

        // 박싱
        Integer intObject1 = m;
        System.out.println(intObject1);

    }
}
