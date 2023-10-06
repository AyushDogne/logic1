#include<stdio.h>
void main()
{
	int n,desi=0,b,r;
	printf("enter no");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%2;
		desi=desi+r*b;
		b=b*10;
		n=n/2;
	}
	printf("%d",desi);
}
