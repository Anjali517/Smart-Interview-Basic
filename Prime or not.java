import java.io.*;
import java.util.*;

public class Solution {

    public static boolean prime(long n)
    {
        int i;
        if(n==1)
            return false;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        long n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextLong();
        if(prime(n))
            System.out.println("Yes");
        else
            System.out.println("No");
        
    }
}
