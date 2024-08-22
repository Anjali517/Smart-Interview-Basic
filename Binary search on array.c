#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,k;
    int a[100];
    int mid;
        
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int l=0;
    int h=n-1;
    while (l<=h)
        { mid=(l+h)/2;
        if (a[mid]==k){
            printf("true");
            break;
           }
         else if (a[mid]>k){
             h=h-1;}
         else{
             l=l+1;}
    }
    if (l>h)
        printf("false");
    
    
    return 0;
}
