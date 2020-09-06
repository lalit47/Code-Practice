#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cout<<"enter the size of array\n";
	cin>>n;
	
	cout<<"enter the numbers\n";
	for(int i=0;i<n;i++)
	{
	cin>>arr[i];
    }
	int max=arr[0];
	cout<<"Maximum among above given numbers:";
	for(int i=1;i<=n;i++)
	{
	   if(arr[i]>max)
	   {
	 	int temp=max;
	 	max=arr[i];
	 	arr[i]=temp;
	   }
	}
	cout<<max;
    

}
