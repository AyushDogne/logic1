#include<stdio.h>
void main()
{
	int i,n;
	int a[]={2,3,16,7,9,44};
    int lan=sizeof(a)/sizeof(a[0]);
    for(i=0;i<lan;i++)
    {
    	n=a[i];
    	if(n%2==0)
    	{
    		printf("enve no is=%d\n",a[i]);
		}
		else
		{
				printf("odd no is=%d\n",a[i]);
		}
}
}
