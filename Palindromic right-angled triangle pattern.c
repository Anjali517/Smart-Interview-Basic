#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int n,i,j,k;
        

        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
                char c='A';
                for(j=1;j<=i;j++)
                {
                        printf("%c ",c);
                        c=c+1;
                        
                }
                c=c-2;
                for(k=i-1;k>=1;k--)
                {
                        
                        printf("%c ",c);
                        c=c-1;
                }
        printf("\n");
        }}
   
