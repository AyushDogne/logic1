#include<stdio.h>
void main()
{
	int n,count=0,rem;
	printf("enter any number=");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
      	 count=count+1;
		   n=n/10;				
	}
	printf("%d",count);
}
