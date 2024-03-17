
package 알고리즘;

public class 다익스트라알고리즘 extends dijikstra {
    // 기초값 정하기
    static int num = 6;
    static int INF = 10000000;



    // 값을 정하기(초기화)
    static int [][] a = new int[][]{
        {0, 2, 5, 1, INF, INF}, 
        {2, 0, 3, 2, INF, INF}, 
        {5, 3, 0, 3, 1, 5}, 
        {1, 2, 3, 0, 1, INF}, 
        {INF, INF, 1, 1, 0, 2}, 
        {INF, INF, 5, INF, 2, 0},
    };
    static boolean v[] = new boolean[]{}; // 방문 노드
    static int d[] = new int[]{}; // 거리 노드

    static int getSmallIndex(){
        int min = INF;
        int index = 0;
        for(int i = 0; i < num; i++){
            if(d[i] < min && !v[i]){
                min = d[i];
                index = i;
            }
        }
        return index;
    }

    public static void dijkstra(int start) {
        for (int i = 0; i < num; i++){
            d[i] = a[start][i];
        }
        v[start] = true;
        for(int j = 0; j<6; j++){
            int current = getSmallIndex();
            v[current] = true;
            if(!v[j]){
                if(d[current] + a[current][j] < d[j]){
                    d[j] = d[current] + a[current][j];
                }
            }
        }
    }
    public static void main(String[] args) {
        dijkstra(0);
        for(int i = 0; i < 6; i++){
            System.out.println(d[i]);
        }
    }
}


/**
 * 
 *dijikstra
 */
class dijikstra {


}
