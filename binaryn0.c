#include<stdio.h>
void main()
{
	int n,binary=0,rem,b;
	printf("enter any no=");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%2;
		binary=binary+rem*b;
		b=b*10;
		n=n/2;
	}
	printf("%d",binary);
}










