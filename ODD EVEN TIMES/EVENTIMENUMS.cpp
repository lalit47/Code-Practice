#include<iostream>
using namespace std;
int main()
{
	int arr[]={12,13,45,82,14,12,45,13,14};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	cout<<"ARRAY ELEMENTS:";
	int i=0;
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"NUMBER OCCURED EVEN TIME: ";
	for(i=1;i<n;i++)
	{
	    int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]!=arr[j])
			{
			      count++;
			      break;
			    
			}
			
		}
		if(count%2!=0)
		{
		cout<<arr[i]<<" ";
		}
	
	
    }
   
    
}
