#include<iostream>
using namespace std;
int main()
{
	int a=0;
	int b=1;
	int n,c;
	cout<<"Enter a number:-\n";
	cin>>n;
	cout<<"Fabonaci Series of "<<n<<" "<<"is\n";
	for(int i=2;i<n;i++)
	{
		c=a+b;
		cout<<a<<"+"<<b<<" = ";
		cout<<c<<endl;
		a=b;
		b=c;
	}
	
	
	
	
}
