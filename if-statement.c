#include<stdio.h>

main()
{
	int a,b;
	printf("enter value A =");
	scanf("%d",&a);
	printf("enter value B =");
	scanf("%d",&b);
	
	if(a<b)
	{
		printf("%d is minimum value",a);
	}
	else
	{
		printf("%d is minimum value",b);
	}
}