import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int m,n;
        Scanner sc=new Scanner(System.in);
        m=sc.nextInt();
        n=sc.nextInt();
        int i,j;
        int a[][]=new int[m][n];
        int b[][]=new int[m][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
                a[i][j]=sc.nextInt();
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                b[i][j]=a[i][n-j-1];
            }
        }
        
       
        
        
        
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[i][j]==0)
                    b[i][j]=1;
                else
                    b[i][j]=0;
            }
        }
        for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
        {
            System.out.print(b[i][j]+" ");
        }
         System.out.println("");
         }
    }
}
