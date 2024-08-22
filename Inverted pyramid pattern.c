#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        {
        for(j=1;j<=i;j++)
            {
            if(i==n||j==1||i==j)
            printf("* ");
            else
                printf("  ");
            
        }
        printf("\n");
    }
    return 0;
}
