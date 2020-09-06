#include<iostream>
using namespace std;
int main()
{
	string str ="abbbbabbabbbba";
//	char str[]= "abbbbabbabbbba";
//	int n=sizeof(str)/sizeof(str[0]);
	int n=str.length();
	int patterncounter=0;
	int i=0;
	
	while(i<n)
	{
		if(str[i]=='a')
		{
	       int bCounter=0;
	       i++;
			  	
			while(i<n && str[i]=='b')
			{
				bCounter++;
                 i++;
		    }
	        if(i<n && bCounter>0 && str[i]=='a')
			{
		 	  patterncounter++;//abbbba abba abbbba
			// i++;	//abbbba abbbba
			
			}
	    }
	    else
	    {
	    	i++;
	    }
	
	}
	cout<<"NO OF PATTERN FORMED="<<patterncounter;
	
}
