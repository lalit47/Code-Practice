//PROGRAM TO PRINT NUM IN WORDS UPTO NINE AND ABOVE NINE IT MAY PRINT EVEN OR ODD:
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,m,i;
    cin>>n>>m;
    string num[]={"one","two","three","four","five","six","seven","eight","nine"};
    for(i=n;i<=m;i++){
    	if(i<=9)
    	cout<<num[i-1]<<endl;
    	else if(i>9 && i%2==0 )
    	  cout<<"even"<<endl;
    	else 
		   cout<<"odd"<<endl;  
	
	}
}
