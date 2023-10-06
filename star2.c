#include<stdio.h>
void main()
{
	int i,j,n;
	for(i=65;i<=69;i++)
	{
		for(j=i;j<=69;j++)
		{
			printf(" ");
		}
		for(n=i;n<=69;n++)
		{
			printf("%c",n);
		}
		printf("\n");
	}
	
}
