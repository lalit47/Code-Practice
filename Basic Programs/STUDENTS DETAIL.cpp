 # include<iostream>
 #include<string.h>

using namespace std;
class student 
{
	string name;
	double roll;
	float marks;
	char grade;
	
public:
	void get();	
	void show();
};



void student::get()
{
	cout<<"Enter student's Details:-\n";
	cout<<"enter name\n";
	getline(cin,name);
	cout<<"\nenter roll\n";
	cin>>roll;
	cout<<"\nenter marks\n";
	cin>>marks;
	cout<<"\nenter grade\n";
	cin>>grade;
	
	
	
}
void student::show()
{
	cout<<"Students result:-\n";
	cout<<"\nname:"<<name;
    cin.ignore( );
	cout<<"\nroll:"<<roll;
	cout<<"\nmarks:"<<marks;
	cout<<"\ngrade:"<<grade<<endl<<endl;
	cout<<"-------------------------\n"<<endl;

}
  
int main()
{
	student s;
	s.get();
	s.show();
	
	student s2;
	s2.get();
	s2.show();
return 0;
}
