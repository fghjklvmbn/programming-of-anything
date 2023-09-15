package 대학교자바.자바프로그래밍3강;

public class 예제4 {
    public static void main(String[] args) {
		for(int i = 1; i<10 ; i++) {
			System.out.println("\n" + i + "단");
			for(int j = 1; j<10 ; j++) {
				System.out.println(i + "*" + j + "="+ i*j);
			}
		}
	}
}
