#include<stdio.h>
struct house{

	char rooms[20];
	char estabished_year[50];
	char city[20];
};

main()
{
	int i,n;
	printf("Enter house number ");
	scanf("%d",&n);
	
	struct house House[n];
	
	for(i=0;i<n;i++)
	{
		printf("house numeber %d:\n");
		
		printf("rooms:");
		scanf("%s",&House[i].rooms);
		
		printf("estsblished_year:");
		scanf("%s",&House[i].estabished_year);
		
		printf("city:");
		scanf("%s",&House[i].city);
		
		printf("\n");
	}
	
	for(i=0;i<n;i++)
	{
		printf("\n house recored is \n");
		
		printf("rooms:%d\n",House[i].rooms);
		printf("estabished_year:%s\n",House[i].estabished_year);
		printf("city:%s\n",House[i].city);
		
		printf("\n");
	}
}



