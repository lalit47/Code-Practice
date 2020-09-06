#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[n];
	cout<<"enter the size of array: ";
	cin>>n;
	//no numbers must be repeated
	//there must be more than two numbers
	cout<<"enter the numbers:"<<endl;
	for(int i=0;i<n;i++)
	{
	  cin>>arr[i];	
	}
	int max=arr[0];
	int secmax=arr[1];

	for(int i=2;i<n;i++)
	{
		if(arr[i]>max)
		{
		secmax=max;
		max=arr[i];
	    }
	    else if(arr[i]>secmax)
	    {
	    	arr[i]=secmax;
		}
    }
    	int min=arr[n-1];
	int secmin=arr[n-2];
	
	for(int i=0;i<n-3;i++)	
	{
	
		if(arr[i]<min)
		{
		secmin=min;
		min=arr[i];
	    }
	    else if(arr[i]<secmin)
	    {
	    	arr[i]=secmin;
		}
    }
		
	
	
	cout<<"largest no= "<<max<<endl;
	cout<<"second largest no= "<<secmax;
	cout<<endl<<"lowest no="<<min;
	cout<<endl<<"second lowest no="<<secmin;
		
}
