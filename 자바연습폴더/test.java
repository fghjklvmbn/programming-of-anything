import java.util.Scanner;

class parkexception extends Exception{

}

public class test {

    public void park(String pk){
        try {
            if("park".equals(pk)){
                throw new parkexception();
            }
        } catch (parkexception e) {
            System.out.println("짜잔! 예외입니다!");
        }
    }
    public static void main(String[] args){
        test test = new test();
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();

        test.park(a);
    }
}
