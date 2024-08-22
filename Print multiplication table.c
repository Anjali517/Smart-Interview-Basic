#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i=1;
    int n;
    scanf("%d",&n);
    while(i<=10){
        printf("%d * %d = %d\n",n,i,n*i);
        i+=1;
        }
    return 0;
}
