public class ArrayUtil{
    public static void reverseArray(int[] arr) {
        
    }

}

public class Matrix {
    private int[][] mat;
    /*
     1 2
     3 4
     5 6
     */

    public Matrix(int[][] m){
        mat = m;
    }

    public void reverseAllRows(){
        for(int[] row: mat){
            ArrayUtil.reverseArray(row);
        }

    }

    public void reverseMatrix(){
        reverseAllRows();
        /*
        2 1
        4 3
        6 5
        */

        for(int i = 0; i < mat.length/2; i ++){
            for(int j = 0; j < mat[0].length; j ++){
                int temp = mat[i][j];
                mat[i][j] = mat[mat.length-i-1][j];
                mat[mat.length-i-1][j] = temp;
            }

        }

    }

}
