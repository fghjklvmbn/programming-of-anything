public class 연습14 {
    public static void main(String[] args){
        allLoop :
        for(int i = 2; i<10;i++){
            for(int j = 1; j<10; j++){
                if(i==5){
                    break allLoop;
                }
                System.out.println(i*j);
            }
        }
    }
}
