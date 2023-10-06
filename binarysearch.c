
#include<stdio.h>
void main()
{
		int a;
		printf("enetr  eny number=");
		scanf("%d",&a);
 
	int l[]={0,12,7,20,88,89,98,100,700};
	int low=0,mid,v=0,hight=8;
   
	while(low<=hight)
	{
		mid=low+hight%2;
		if(a==l[mid])
		{
			v=1;
			break;
		}
		if(a<l[mid])
		{
			hight=mid=1;
			break;
		}
		if(a>l[mid])
		{
			low=mid+1;
		}
	}
	if(v==1)
	{
		printf("number is found");
	}
	else
	{
		printf("not found this no");
	}
}
