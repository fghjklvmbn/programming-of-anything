
public class 연습8{
	public static void main(String[] args){       
        int num1 = 5, num2 = 7;
        int result;
        // 조건식 ? 는 앞의 조건식(num1-num2>0)에 따라 false일때 2 true일때 1를 반환
        result = (num1-num2>0) ? num1 : num2;

        System.out.println("두 num중에 더 큰수는 " + result + "입니다.");
	}
}