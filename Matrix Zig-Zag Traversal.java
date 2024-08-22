import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int m,n,i,j;
        Scanner sc=new Scanner(System.in);
        m=sc.nextInt();
        n=sc.nextInt();
        int a[][]=new int[m][n];
         for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                a[i][j] = sc.nextInt();
            }
        }
         for (i = 0; i < m; i++) {
             if(i%2==0){
            for (j = 0; j < n; j++) {
                System.out.print(a[i][j]+" ");
            }}
                 else{
                     for(j=n-1;j>=0;j--)
                         System.out.print(a[i][j]+" ");
                 }
             
        }
        
        
        
    }
}
