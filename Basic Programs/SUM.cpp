#include<iostream>
using namespace std;

 
  int sum(int arr[],int n )
{ 
	int sum=0;

	for(int i=0;i<n;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
 int main()
 {
 //	int N;
 //	int size=N;
 	int arr[]={12,41,13};
 	int n=sizeof(arr)/sizeof(arr[0]);
 /*	for(int i=0;i>size;i++)
 	{
 		cin>>arr[i];
	}*/
	cout<<"sum of numbers are "<< sum(arr,n);
  } 

