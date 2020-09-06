#include<iostream>
using namespace std;
int main()
{
//	string str ="100010000100001";
	char str[]= "10001000010001";
	int n=sizeof(str)/sizeof(str[0]);
//	int n=str.length();
	int patterncounter=0;
	int i=0;
	
	while(i<n)
	{
		if(str[i]=='1')
		{
	       int zeroCounter=0;
	       i++;
			  	
			while(i<n && str[i]=='0')
			{
				zeroCounter++;
                 i++;
		    }
	        if(i<n && zeroCounter>0 && str[i]=='1')
			{
		 	  patterncounter++;
			// i++;	
			
			}
	    }
	    else
	    {
	    	i++;
	    }
	
	}
	cout<<"NO OF PATTERN FORMED="<<patterncounter;
	
}
