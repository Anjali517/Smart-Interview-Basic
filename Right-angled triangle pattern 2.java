import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
       
        Scanner sc = new Scanner(System.in);
        int i,j;
        int n = sc.nextInt();
    
        for (i=1;i<=n;i++) {
            int k=n-1;
            int l=i;
            for (j=1;j<=i;j++){
                    
                    System.out.print(l+" ");
                    l=l+k;
                    k=k-1;
                }
            
            System.out.println("");
        }

      
    }
}
