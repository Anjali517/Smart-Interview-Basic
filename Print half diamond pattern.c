#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    n=n-1;
    for(i=n;i>=1;i--)
        {
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
        
    return 0;
}
