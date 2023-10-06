
#include<stdio.h>
void main()
{
	int a=144,temp=a,rev=0,rem;

	while(a!=0)
	{
		rem=a%10;
      rev=rev*10+rem;
		   a=a/10;				
	}
	if(rev==temp)
	{
		printf(" it is palimrom no");
	}
	else
	{
		printf(" it is not palimrom no");
	}
}


//
//#include<stdio.h>
//void main()
//{
//	int a,temp=a,rev=0,rem,tcount=0,pcount=0,list,i,size;
//	
//	Array=[12,66,14,88];
//	for(i=0;i<=4;i++)
//	a=Array+(i);
//
//	while(a!=0)
//	{
//		rem=a%10;
//      rev=rev*10+rem;
//		   a=a/10;				
//	}
//	if(rev==temp)
//	{
//		pcount=pcount+1;
//	}
//	else
//	{
//	tcount=!tcount+1;
//	}
//	printf("%d",pcount);
//		printf("%d",tcount);
//	
//}

