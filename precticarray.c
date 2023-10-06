#include<stdio.h>
void main()
{

	int i,j;
	int l2[7];
	int l[7]={5,7,3,12,4,13,23};
	
	for(i=0;i<7;i++)
	{
		int flag=0;
	for(j=i+1;j<7;j++)
	{
		if(l[i]==l2[j])
		{
			flag=1;
			break;
		}
}
		if(flag==1)
		{
			l2[j]==l[i];
			 j++;
		}
	
	}
		for(i=0;i<j;i++)
		{
			printf("%d\n",l2[i]);
		}
    
}


