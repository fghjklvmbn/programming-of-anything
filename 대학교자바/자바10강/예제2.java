package 대학교자바.자바10강;
import java.util.*;

class point {
    private int x, y;
    public point(int x, int y){
        this.x = x;
        this.y = y;
    }

    public String toString(){
        return "(" + x + "," + y + ")";
    }
}

public class 예제2 {
    public static void main(String[] args){
        Vector<point> v = new Vector<point>();

        v.add(new point(2, 3));
        v.add(new point(-5, 20));
        v.add(new point(30, 8));

        v.remove(1);

        for(int i = 0; i<v.size(); i++){
            point p = v.get(i); // POINT 호출
            System.out.println(p);
        }
    }
}
