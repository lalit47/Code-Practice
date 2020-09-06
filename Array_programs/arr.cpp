#include<iostream>
using namespace std;
int main()
{
	int n;
	int i=0;
	int arr[i];
	cout<<"size of array:"<<endl;
	cin>>n;
	cout<<"enter the no:"<<endl;
	
	for( i=0;i<n;i++)
	{
	   cin>>arr[i];
	
    }
	int max=arr[0];
	
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		  max=arr[i];
	}
	cout<<"MAX="<<max;
}
