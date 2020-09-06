//Program to find out missing numbers:
#include<iostream>
using namespace std;
int main()
{
	int i,j,temp=0;
	int arr[8]={2,4,9,3,6,5,8,7};
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(arr[i]<arr[i+1])
			{
			  temp=arr[i];
			     arr[i]=arr[i+1];
			     arr[i]=temp;
			 
			}
			
			 
	   }
   }

}
