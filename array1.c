#include<stdio.h>
void main()
{
	int i,a,v;
	printf("enter no=");
	scanf("%d",&a);
	int l[5]={1,3,65,34,5};
	for(i=0;i<5;i++)
      { 
       v=0;
        if(a==l[i])
        {
       	v=1;
       	break;
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

