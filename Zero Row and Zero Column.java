import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); 
        int m = sc.nextInt(); 
        // Create a 2D array to store the matrix
        int[][] matrix = new int[n][m];

        // Input: Read the elements of the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = sc.nextInt();
            }
        }
       int m2[][]=new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                m2[i][j] = matrix[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (m2[i][j] == 0) {
                    
                    for (int k = 0; k < n; k++) {
                        matrix[k][j] = 0;
                    }
                    
                    for (int k = 0; k < m; k++) {
                        matrix[i][k] = 0;
                    }
                }
            }
        }

        // Output: Print the resultant matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }

        
        
        
    }
}
