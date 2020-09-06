#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,4,3,8,6,7,6,8,3,1,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	int i=0;
	cout<<"ARRAY ELEMENTS:";
	for(i=1;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	int sum=0;
	for(i=0;i<n;i++)
	{
	  sum ^=arr[i];
	}
	cout<<"ODD TIME OCCURED NUMBER:"<<sum;
}
