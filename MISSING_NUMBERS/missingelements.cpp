#include<iostream>
using namespace std;
int main()
{
	int arr[]={1,2,2,4,4};
	int sizeofarray=5;
	int n=1;
	cout<<"mising elements are:"<<endl;
	for(int i=0;i<sizeofarray;i++)
	{
		if(arr[i]==n)
		{
			n++;
		}
		else
		{
			
		    cout<<n<<" ";
			 n++;
		}
	}
	
	
}
