

#include<stdio.h>
void main()
{
	int j,i,n,countnp=0,countp=0;
	int a[8]={3,6,13,15,17,53,93,67};
	for(i=0;i<8;i++)
	{
	int flag=0;
     n=a[i];
 	for(j=2;j<n;j++)
    {
    	if(n%j==0)
    	{
    		flag=1;
    		countnp++;
    		break;
		}
	}
	if(flag==1)
	{
		printf("not prime=%d\n\n",a[i]);
	}
	else
	{
		printf("prime num=%d\n\n",a[i]);
		countp++;
	}
	}
	printf("prime no=%d\n",countp);
		printf(" not prime no=%d",countnp);
}
