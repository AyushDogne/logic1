

#include<stdio.h>
void main()
{
	int a=153,last,sum=0,temp=a;
	 
	 while(a!=0)
	 {
	 	last=a%10;
	 	sum=sum+(last*last*last);
	 	a=a/10;
	 }
	 if(sum==temp)
	 {
	 	printf("armstong");
	 }
	else
	{
		printf("no arm");
	}
}

//
//
#include<stdio.h>
void main()
{
	int a=153,rem,sum=0,temp=a,n=0;
	 
	 while(a!=0)
	 {
	 	rem=a%10;
	 	sum=sum+power(rem,n);
	 	a=a/10;
	 }
	 if(sum==temp)
	 {
	 	printf("armstong");
	 }
	else
	{
		printf("no arm");
	}
}

