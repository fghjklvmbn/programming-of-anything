package 대학교자바.자바8강;

class point {
    private int x,y;
    public point(int x, int y){
        this.x = x;
        this.y = y;
    }
}

public class 예제3 {
    public static void main(Object obj) {
        System.out.println(obj.getClass().getName());
        System.out.println(obj.hashCode());
        System.out.println(obj.toString());
        System.out.println(obj);
    }
    public static void main(String[] args) {
        point p = new point(2, 3);
        System.out.println(p);
    }
}