#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[100][100],b[100][100],c[100][100];
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
        }
    for(int i=0;i<m;i++)

        {

        for(int j=0;j<n;j++)

        scanf("%d",&b[i][j]);

        }
    for(int i=0;i<m;i++)

        {

        for(int j=0;j<n;j++)
         c[i][j]=0;
        

        }
    for(int i=0;i<m;i++)

        {

        for(int j=0;j<n;j++)
{
        c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);
}
        printf("\n");
        }
    return 0;
}
