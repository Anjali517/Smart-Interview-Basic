#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        {
        for(int s=n-i-1;s>0;s--)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
