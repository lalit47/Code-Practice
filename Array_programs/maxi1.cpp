#include<iostream>
using namespace std;
int main()
{
	int size=6;
     int i=0;
	 int temp=0;		
	int villains[]={112,243,512,343,90,478};
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
		
		    if(villains[i]<villains[j])
		    {
		       temp=villains[i];
		    	villains[i]=villains[j];
		    	villains[j]=temp;
		    

			}
		}
	}
	for(i=0;i<size;i++)
	{
	cout<<villains[i]<<" ";
    }
    
}
