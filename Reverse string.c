#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char a[100],b[100];
    scanf("%s",a);
    int j=0;
    int l=strlen(a)-1;
    //printf("%d",l);
    for(int i=l;a[i]!='\0';i--)
        {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    puts(b);
    return 0;
}
