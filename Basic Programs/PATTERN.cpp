#include<iostream>
using namespace std;
int main()
{
	int i,j;
	for(i=9;i>=1;i--)
	{
	  for(j=5;j>=1;j--)
		{
			if(i<=6-j||i>=4+j)
               cout<<"*";
              else
			    cout<<" "; 
               
		}
		cout<<endl;
		
		
	}
}
