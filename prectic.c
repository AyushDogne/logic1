#include<stdio.h>
void main()
{
int num,i,a=0,b=1,c=0;
printf("enetr any number=");
scanf("%d",&num);

while(num!=0)
{
	num=num%10;
	c=c+1;
	num=num/10;
	
}
printf("%d",c);

}
