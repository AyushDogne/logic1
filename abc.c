#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=65;i<=69;i++)
	{
	for(j=i;j<=69;j++)
	{
	  	printf(" ");
    }
		for(k=65;k<=i;k++)
		{
		printf("%c",k);
	}
		printf("\n");
}

}
