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
    int n;
 	int arr[n];
 	cout<<"Enter the size of array:\n";
 	cin>>n;
 	cout<<"enter the numbers:\n";
 	for(int i=0;i<n;i++)
 	{
 		cin>>arr[i];
	}
		for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nsum of numbers are "<< sum(arr,n);
  } 

