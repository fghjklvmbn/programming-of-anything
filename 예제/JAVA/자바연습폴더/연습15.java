public class 연습15 {
    public static void main(String[] args) {
        int grade1[] = new int[3];
        int grade2[] = new int[3];

        grade1[0] = 85;
        grade1[1] = 65;
        grade1[2] = 90;

        grade2[0] = 85;

        for(int i=0;i<grade1.length;i++){
            System.out.println(grade1[i] + " ");
        }

        for(int i=0;i<grade2.length;i++){
            System.out.println(grade2[i] + " ");
        }
        
        int grade[] = new int[]{85,65,90};
        int sum = 0;

        for(int i =0;i<grade.length;i++){
            sum += grade[i];
        }
        System.out.println(sum);
        System.out.println(sum/grade.length);

        int array[][] = new int [2][3];
        int k = 10;

        for(int i = 0; i<array.length; i++){
            for(int j = 0; j<array[i].length;j++){
                array[i][j] = k;
                k += 10;
            }
        }
        
        for(int i = 0; i<array.length; i++){
            for(int j = 0; j<array[i].length;j++){
                System.out.println(array[i][j]);
            }
        }
        int arr[][] = {{10,20,30},{40,50,60}};
        for(int i = 0; i<array.length; i++){
            for(int j = 0; j<array[i].length;j++){
                System.out.println(arr[i][j]);
            }
        }
    }
}
