#include<stdio.h>
void main()
{
	int i;
	int a[]={1,44,65,34,5};
	int b[5];

	for(i=0;i<5;i++)
    {
	b[i]=a[i];
		printf("%d\n",b[i]);	
	}	
	
	for(i=4;i>0;i--)
    {
	b[i]=a[i];
		printf("%d\n",b[i]);	
	}	


	
}
