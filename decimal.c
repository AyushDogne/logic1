#include<stdio.h>
void main()
{
	int n,deci=0,rem,b;
	printf("enetr no");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem=n%10;
		deci=deci+rem*b;
		b=b*2;
		n=n/10;
	}
	printf("%d",deci);
}
