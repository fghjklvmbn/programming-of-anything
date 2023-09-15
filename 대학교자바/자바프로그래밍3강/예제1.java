package 대학교자바.자바프로그래밍3강;

public class 예제1{
	public static void main(String[] args) {
		int sum =0;
		 for(int i = 1; i<=10; i++) {
			 sum += i;
			 System.out.print(i);
			 
			 if(i<= 9) {
				 System.out.print(" + ");
			 } else {
				 System.out.print(" = ");
				 System.out.print(sum);
			 }
		 }
	}
}