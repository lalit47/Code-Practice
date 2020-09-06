#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,2,4,4};
	int arraysize=5;
	int i=0;
	cout<<"missing elements are:"<<endl;
	for(i=1;i<arraysize;i++)
	if(arr[i]!=i+1)
	   
	   cout<<i+1<<" ";
}
