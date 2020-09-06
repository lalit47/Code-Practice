#include<iostream>
using namespace std;
int main( )
{
 int n;	
 int arr[n];
 cout<<"enter the size of array"<<endl;
 cin>>n;
 cout<<"enter the no:"<<endl;
 for(int i=0;i<n;i++)
 {
 	cin>>n;
 }
 
 int max,secmax,thirdmax;
 max=secmax=thirdmax;
 
 for(int i=0;i<n;i++)
{

	if(arr[i]>max)
	{
	thirdmax=secmax;	
	secmax=max;
	max=arr[i];
    }
    
   else if(arr[i]>secmax)
    {
    	thirdmax=secmax;
    	secmax=arr[i];
	}
	
	else if(arr[i]>thirdmax)
	{
		thirdmax=arr[i];
	}
}
 cout<<"MAX= "<<max<<endl;
 cout<<"SECMAX= "<<secmax<<endl;
 cout<<"THIRDMAX= "<<thirdmax;
}

