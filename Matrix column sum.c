#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a[100][100],i,j,m,n,s=0;
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
        {for(j=0;j<n;j++)
            scanf("%d",&a[i][j]);}
    for(i=0;i<n;i++)
        {
        s=0;
        for(j=0;j<m;j++)
            {
            s=s+a[j][i];
        }
        printf("%d\n",s);
    }
    
    return 0;
}
