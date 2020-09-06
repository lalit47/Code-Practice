#include<iostream>
using namespace std;
int main()
{
 int arr[]={5,1,4,2,8};
 int i,j,temp;
 for(i=0;i<=4;i++)
 {
 	for(j=0;j<=4-i;j++)
 	{
 	  if(arr[j]>arr[j+1])
	  {
	  temp=arr[j+1];
	  arr[j+1]=arr[j];
	  arr[j]=temp; 	
	  
	  }	
	  
    }
    cout<<arr[i];
 }
 }
