#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    int k=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {
        for(int j=1;j<=i;j++)
            {
           
            printf("%d ",k);
            k+=1;
            }
        printf("\n");
    }
    return 0;
}
