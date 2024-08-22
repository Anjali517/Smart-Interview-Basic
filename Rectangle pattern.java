import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int i,j;
        for(i=0;i<n;i++)
        {
            for(j=n;j>=1;j--){
                if(j==i+1)
                    System.out.print("*");
                else
                System.out.print(j);
            }
            System.out.println("");
        }
    }
}
