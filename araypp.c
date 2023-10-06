#include<stdio.h>
void main()
{
	int a,i,c;
	int n[]={12,111,32,55,7};
	for(i=0;i<5;i++)
	{
		c=0;
		a=n[i];
		while(a!=0)
		{
			a=a%10;
			a=c+1;
		}
		printf("%d",a);
	}
}
