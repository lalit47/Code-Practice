#include<iostream>
using namespace std;
int main()
{
	int size=0;
	int arr[size];
	cout<<"enter the size of array"<<endl;
	cin>>size;
	int i=0;
	cout<<"Enter"<<" "<<size<<" "<<"numbers:-"<<endl<<endl;
	for(i=0;i<size;i++)
	{
		cin>>arr[i];
	
		if(arr[i]>0)
		{
			cout<<"\t"<<i<<"\tpos\n";
		}
		else if(arr[i]<0)
		{
			cout<<"\t"<<i<<"\tneg\n";
		}
        else
        {
        	cout<<"\t"<<i<<"\tzero\n";
		}
	}

	
	
	
}
