#include<iostream>
using namespace std;
int main()
{
	int arr[]={12,11,13,5,6};
	int i,temp1,temp;
	for(i=1;i<5;i++)
	{
	 temp=arr[i];
	 temp1=i-1;
	 while(arr[temp1]>temp && temp1!=-1)
	 {
	 	arr[temp1+1]=arr[temp1];
	 	temp1--;
	 	
	 }
	 
	 arr[temp1+1]=temp;
	 
	}
	for(i=0;i<5;i++)
	{
	 cout<<arr[i]<<endl;
	}
}
