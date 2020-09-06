#include<iostream>
using namespace std;
int main()
{
	int n;
	long fact=1;
	cout<<"Enter a number:-\n";
	cin>>n;
	for(int i=n;i>=1;i--)
	{
		fact=fact*i;
		
	}
	cout<<"Factorial of "<<n<<" = "<<fact;
	
}
