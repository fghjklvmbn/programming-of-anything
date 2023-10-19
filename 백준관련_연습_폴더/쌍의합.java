package 백준관련_연습_폴더;

import java.util.ArrayList;
import java.util.Scanner;

public class 쌍의합 {
    private static ArrayList<Integer> solveSumPairs(int target){
        ArrayList<Integer> answer = new ArrayList<>();
        answer.add(1,1);
    
    
        return answer;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int numCases = sc.nextInt();

        for(int n = 0; n<numCases; n++){

            int target = sc.nextInt();
            
            ArrayList<Integer> answer = solveSumPairs(target);
            System.out.print("pairs for "+target+": ");
            
            for(int i = 0; i<answer.size(); i+=2){
                if(i>0){
                    System.out.print(", ");
                    System.out.print(answer.get(i) + " " + answer.get(i+1));
                }
                System.out.println();
            }
        }
        sc.close();
    }

}
