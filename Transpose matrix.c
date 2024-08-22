#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int m,n,a[100][100],b[100][100];
    scanf("%d %d",&m,&n);
    
    for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
            {scanf("%d",&a[i][j]);
        b[i][j]=0;
    }}
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            b[i][j]=a[j][i];
    }
    for(int i=0;i<n;i++)
        {
        for(int j=0;j<m;j++)
            printf("%d ",b[i][j]);
        printf("\n");
    }
    return 0;
}
