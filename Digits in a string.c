#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    char a[100];
    int c=0;
    scanf("%s",a);
    int i=0;
    while(i<strlen(a))
        {
        if (a[i]>='0' && a[i]<='9')
            c=c+1;
        i+=1;
    }
    if(c==strlen(a))
        printf("Yes");
    else
        printf("No");
    return 0;
}
