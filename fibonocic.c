#include <stdio.h>

void  main()
{
    int a=0,b=1,c,n,i;
    printf("enter value n=");
    scanf("%d",&n);
    
    printf("%d\n",a);
    printf("%d\n",b);
	 
     for(i=1;i<=n;i++)
     
     {
     c=a+b;
     printf("%d\n",c);
     a=b;
     b=c;
     }
    }

