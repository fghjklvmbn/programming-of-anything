package 대학교자바;

public class 예제3 {
    public static void main(String[] args) {
		char c = 'A';
		char b = 'a';
		
		do {
			System.out.print(c);
			System.out.print(b);
			c = (char)(c+1);
			b = (char)(b+1);
		} while(c<='Z' || b<='z');

	}

}
