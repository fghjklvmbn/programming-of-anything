package 대학교자바;

class test {
    protected int a;
}
public class park extends test {
    // 생성자
    public int park(int a){
        this.a = a;
        return a;
    }
    
    public static void main(String []arg){
        park pa = new park();
        System.out.println(pa.a);
    }
}