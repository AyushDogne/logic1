//#include<iostream>
//#include<string>
//using namespace std;
//int main()
//{
//	string str="harsh";
//	int hash[26]={0};
//	
//	for(int i=0;str[i]!='0';i++)
//	{
//		hash[str[i]]++;
//	}
//	
//	for(int i=0;i<26;i++)
//	{
//		if(hash[i]==1)
//		{
//			cout<<i<<" ";
//		}
//	}
//	return 0;
//	
//}




#include<iostream>
using namespace std;
 int main()
 {
 	int num;
 	cout<<"enter size of array";
 	cin>>num;
 	
 	int arr[11];
 	cout<<"enter array element"<<"\n";
 	for(int i=0;i<num;i++)
 	{
 	cin>>arr[i];
 	}
 	int hash[1000]={0};
 	for(int i=0;i<=num;i++)
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















