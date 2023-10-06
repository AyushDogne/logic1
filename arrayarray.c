#include<stdio.h>
void main()
{
 int l[5],i,sum=0;

  for(i=0;i<5;i++)
  {
     printf("enter array element=");
  scanf("%d",&l[i]);
  
}
 printf("sum of array");
  for(i=5;i>=0;i--)
  
  {
   sum+=l[i];
    }
  printf("%d\n",sum);    
}
