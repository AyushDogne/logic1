#include<stdio.h>
void main()
{
	int n,b=10,ver=1,i,sum;
	printf("enter no=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+ver;
		ver=ver+b;
		b=b*10;
		
	}
	printf("%d",sum);
}
