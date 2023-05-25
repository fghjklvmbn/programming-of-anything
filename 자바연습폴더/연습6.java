public class 연습6 {
    public static void main(String[] args){
        char c1 = 'a';
        char c2 = 'A';
        char c3 = 'b';
        char c4 = 'B';
        boolean r1, r2;

        System.out.println(c1<c2);
        System.out.println(c1>c2);

        r1 = (c3>'a') || (c4>'b'); // or
        r2 = (c3<'a') && (c4<'b'); // and

        System.out.println(r1);
        System.out.println(r2);
        
	}
}
