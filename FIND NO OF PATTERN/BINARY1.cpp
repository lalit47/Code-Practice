#include<iostream>
using namespace std;
int main()
{
	
	char str[]= "10001000010001";
	int n=sizeof(str)/sizeof(str[0]);
	int patterncounter=0;
	int i=0;
	
	while(i<n-1)//as "/0" is taking 1 index we use n-1
	{
		if(str[i]=='1')
		{
	       int zeroCounter=0;
	       i++;
			  	
			while(i<n-1 && str[i]=='0')
			{
				zeroCounter++;
                 i++;
		    }
	        if(i<n-1 && zeroCounter>0 && str[i]=='1')
			{
		 	  patterncounter++;
			 //i++;	
			  
			}
	    }
	    else
	    {
	    	i++;
	    }
	
	}
	cout<<"NO OF PATTERN FORMED="<<patterncounter;
    	
}
