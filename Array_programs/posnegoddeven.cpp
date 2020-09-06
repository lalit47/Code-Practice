#include<iostream>
using namespace std;
int main()
{
	int pos,neg,zero=1;
	int size=0;
	int arr[size];
	cout<<"enter the size of array";
	cin>>size;
	int v,x,y,i=0;
	cout<<"\nenter the numbers:\n";
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]>0)
		{
		
			pos++;
		}
		else if(arr[i]<0)
		{
			i++;
			neg++;
		}
        else
        {
        	zero++;
		}
	}
     cout<<"positive number:"<<pos<<" "<<endl;
	 cout<<"negative number:"<<neg<<" "<<endl;	

	
	
	
}
