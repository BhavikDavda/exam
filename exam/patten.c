#include <stdio.h>
int main() 
{
    
    int i,j,num=10;

    for (i=0; i<5; i++) {
        for (j=0; j<=i; j++) {
            printf("%d ",num*num);
        }
        num--;
        printf("\n");
    }

}

