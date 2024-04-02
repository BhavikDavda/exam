#include <stdio.h>
main()
{
    int i, number; 
	int a= 0; 

    printf("Enter any number Prime: ");
	scanf("%d", &number);

	for(i=2;i<=number/2;i++)
	{
	    if (number % i == 0)
	    {
	        a++;
		}
	} 
    if (a == 0 && number != 1)	
    {
        printf("%d is a Prime number",number);
    }
	else
	{
	    printf("%d is  not prime number",number);
	}
}
