#include<stdio.h>

main()
{
	int neutral;
	
	printf("enter value neutral=");
	scanf("%d",&neutral);
	
	if(neutral>0)
	{
		printf("number is not neutral");
	}
	else if(neutral==0)
	{
		printf("number is neutral");
	}
	else if(neutral<0)
	{
		printf("number is not neutral");
	}
}