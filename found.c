#include<stdio.h>
void main()
{
	int i,a,v=0;
	printf("enter no=");
	scanf("%d",&a);
	int l[]={1,3,65,34,5};
	for(i=0;i<5;i++)
      { 
        if(a==l[i])
        {
        	v=1;
        
		}
	}
			
		if(v==1)
		{	
			printf("this number is already in this array");
	
		}
		else
		{
		printf("this number is not in this array");
			
		}
	   	
}
	   
