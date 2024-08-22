import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int m=sc.nextInt();
        int n=sc.nextInt();
        int sum=0;
        int a[][]=new int[m][n];
        for(int i=0;i<m;i++)
            {for(int j=0;j<n;j++)
                a[i][j]=sc.nextInt();
             }
        for(int i=0;i<m;i++)
            {
            sum=0;
            for(int j=0;j<n;j++){
                sum=a[i][j]+sum;
            }
                System.out.println(sum);
            
        }
    }
}
