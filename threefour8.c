#include<stdio.h>
void main()
{
	int i,n=50;
	for(i=1;i<=n;i++)
	{
		if(i%3==0 && i%4==0 && i%8==0)
		{
			
      	printf("%d\n",i);
			
		}
	
	}
}
