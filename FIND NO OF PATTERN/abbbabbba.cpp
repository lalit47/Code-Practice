#include<iostream>
using namespace std;

int main()
{
	cout<<"ENTER THE abbba or abbabbba like pattern:";
	string s;
	cin>>s;
	int string_length = s.length();
	int count =0;
	
	int i=0;
	while(i<string_length)
	{
		while(s[i]!='a')
		{
			i++;
		}
		 i=i+1;
		 if(s[i]=='b')
		 {
		 	while(s[i]=='b')
		 	{
		 		i++;
			 }
			 if(s[i]=='a')
			 {
			 	count++;
			 //	i++;
			 }
		 }
	}
	cout<<"\nNO OF PATTERN FORMED="<<count<<endl;
}
