#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    /*char a[10];
    scanf("%d",a);
    int i=0;
    while(i<strlen(a))
        
    }*/
      char a[100];

    scanf("%s",a);

    int i=0,c=0,v=0;

   // printf(strlen(a));

    while(i<strlen(a))

        {

        

        if (a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')

            {

            v+=1;

            

        }

        else

            { c+=1;

            }

        i+=1;

    }
    if (c==0)
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
