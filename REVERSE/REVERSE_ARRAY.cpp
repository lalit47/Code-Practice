#include<iostream>
using namespace std;
void reverse_array(int arr[],int start,int end)
{
	while(start<end)
	{
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
 } 
 void print_array(int arr[],int n)
 {
 	for(int i=0;i<n;i++)
 	{
 	 cout<<arr[i]<<" ";	
	 }
 }
 int main()
 {
   int arr[]={1,2,3,4,5,6};
   int n=sizeof(arr)/sizeof(arr[0]);
   cout<<"original array\n";
   print_array(arr,n);
   reverse_array(arr,0,n-1);
   cout<<"\nreverse array\n";
   print_array(arr,n);
 }
