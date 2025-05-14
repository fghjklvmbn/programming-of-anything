public class 연습7 {
    public static void main(String[] args){
        int n1 = 8;
        int n2 = -8;

        System.out.println("~ 결과 : " + ~n1); // 반대값 + 1
        System.out.println("<< 결과 : " + (n1<<2)); // 2에 해당하는 2진수 비트에서 비트의 두칸을 옮김(왼쪽) (32)
        System.out.println(">> 결과 : " + (n2>>2)); // 2에 해당하는 2진수 비트에서 비트의 두칸을 옮김(오른쪽) (-2)
        System.out.println(">>> 결과 : " + (n1>>>2)); // 부호비트 포함해서 두칸을 옮김(2진수 중 맨 왼쪽인 부호비트 기준으로 0인지 1인지 바뀜)
        System.out.println(">>> 결과 : " + (n2>>>2)); // 위와 동일시
    }
}
