#include<iostream>
using namespace std;
int main()
{

int arr[]={56,35,78,99,23};
int min=arr[0];
int n=5;
int i=0;
for(int i=1;i<=n-1;i++)
{
	if (arr[i]<min)
	{	
	   min=arr[i];	
	}
}
cout<<min;
}
