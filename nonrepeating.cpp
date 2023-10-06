#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	
	int arr[11];
	cout<<"enter the values of array elemnts"<<endl;
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	int hash[1000]={0};
	
	for(int i=0;i<n;i++)
	{
		hash[arr[i]]++;
	}
	for(int i=0;i<1000;i++)
	{
		if(hash[i]==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
	
}
