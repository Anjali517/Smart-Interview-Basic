#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int m,n;
    int z=0,y=0;
    scanf("%d %d",&m,&n);
    int a[100][100];
    for(int i=0;i<m;i++)
        {
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    }
    for(int i=0;i<m;i++)

        {

        for(int j=0;j<n;j++)
{
            if(a[i][j]==0)
                z+=1;
            else
                y+=1;

    }}
    if(z>(m*n)/2)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
