#include<iostream>
using namespace std;
int reverse_digits(int num)
{
	int rev_num=0;
	while(num>0)
	{
	rev_num=rev_num *10+num%10;
	num=num/10;
    }
  return rev_num;
}
int main()
{
	
	int num;
   cout<<"ENTER THE NUMBER:\n";
   cin>>num;
   cout<<"REVERSED NUMBER IS "<<reverse_digits(num);
}
