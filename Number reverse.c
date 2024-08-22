#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long r=0,rev=0;
    long long n;
    scanf("%lld",&n);
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("%lld",rev);
    return 0;
}
