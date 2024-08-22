#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    char a[100];
    char ch;
    int count=0;
    gets(a);
    scanf("%c",&ch);
    
    //printf("%c",ch);
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==ch)
            count++;
        //printf("%d",count);
    }
    printf("%d",count);
    return 0;
}
