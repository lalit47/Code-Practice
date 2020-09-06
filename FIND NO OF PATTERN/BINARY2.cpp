#include<iostream>
using namespace std;

int main()
{
	cout<<"ENTER THE BINARY NUMBER:";
	string s;
	cin>>s;
	int string_length = s.length();
	int count =0;
	
	int i=0;
	while(i<string_length)
	{
		while(s[i]!='1')
		{
			i++;
		}
		 i=i+1;
		 if(s[i]=='0')
		 {
		 	while(s[i]=='0')
		 	{
		 		i++;
			 }
			 if(s[i]=='1')
			 {
			 	count++;
			 //	i++;
			 }
		 }
	}
	cout<<"\nNO OF PATTERN FORMED="<<count<<endl;
}
