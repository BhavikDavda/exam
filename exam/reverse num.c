#include <stdio.h>
int main() 
{
    int num,reversed = 0;

    printf("Enter a  number: ");
    scanf("%d",&num);

    if (num<100 || num>999)
	 {
        printf("Please enter a valid 3-digit number.\n");
        
    }
    while (num!=0) 
	{
        int digit = num%10;
        reversed = reversed*10+digit;
        num /=10;
    }
    printf("Reversed number: %d\n", reversed);

    return 0;
}

