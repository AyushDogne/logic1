#include<stdio.h>
void main()
{
	int a,b,min=0,fect,i;
	printf("enter no a=");
	scanf("%d",&a);
	printf("enter no b=");
	scanf("%d",&b);
	
	if(a>b)
	{
		min=b;
	}
	else
	{
		min=a;
	}
	for(i=1;i<=min;i++)
	{
		if(a%i==0&&b%i==0)
		{
			fect=i;
		}
	
	}
		printf("%d",fect);
}
	
	
	
