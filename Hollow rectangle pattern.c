#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int m,n;
    scanf("%d %d",&m,&n);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    for(int i=1;i<=n;i++){

    for(int j=1;j<=m;j++)

    {
        if(i==1||j==1||i==n||j==m)
        printf("*");
        else
            printf(" ");

    }
    printf("\n");}
    return 0;
}
