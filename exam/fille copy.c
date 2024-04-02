#include<stdio.h>
main()
{
	FILE *dummyptr;
	FILE *coppiedptr;
	char n;
	
	dummyptr= fopen("dummy.txt","r");
	coppiedptr= fopen("coppied.txt","w");
	
	if(dummyptr==NULL && coppiedptr==NULL)
	{
		printf("Files can't open..");
		return 1;
	}
	else
	{
		printf("File created succesfully..");
		
		while(dummyptr!=EOF)
		{
			n=getc(dummyptr);
			fputs(n,coppiedptr);
		}
		fclose(dummyptr);
		fclose(coppiedptr);
	}
	return 0;
}
