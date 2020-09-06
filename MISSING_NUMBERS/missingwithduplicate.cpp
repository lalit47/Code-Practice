#include<iostream>
using namespace std;
int main()
{
	int arraysize;
	int arr[arraysize];
	
	cout<<"enter the size of array: ";
	cin>>arraysize;
	cout<<endl<<"enter "<<arraysize<<" numbers"<<endl;
	for(int i=0;i<arraysize;i++)
	{
		cin>>arr[i];
	}
	cout<<endl<<"missing elements are:"<<endl;
	for(int i=1;i<arraysize;i++)
	{
	if(arr[i]!=i+1)
	 {
	   cout<<i+1<<" ";
     }
    }
	cout<<endl<<"duplicate numbers are:";
	for(int i=1;i<arraysize;i++)
	if(arr[i]!=i+1)
	   cout<<i<<" ";   
}
