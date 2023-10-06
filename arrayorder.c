#include<stdio.h>
void main()
{
	int i,j,temp,n;
	int l[]={5,30,6,4,12,2,10,15,3,20};
	n=sizeof(l)/sizeof(l[0]);
	  
	  for(i=0;i<n;i++)
	  {
	  	for(j=i+1;j<n;j++)
	  {
	  	if(l[i]>l[j])
	  	{
	  		temp=l[i];
	  		l[i]=l[j];
	  		l[j]=temp;
		  }
	
}
  printf("%d\n",l[i]);
}

}
