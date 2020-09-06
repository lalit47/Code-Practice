#include<iostream>
using namespace std;
int main()
{
	int size=6;
     int i=0;
	 int temp=0;
	 int count=0;
	int heroes[]={500, 789, 234, 400, 452, 150};
	cout<<"HEROES POWER\n";
	for(i=0;i<size;i++)
	{
		cout<<heroes[i]<<" ";
	}
	int villains[]={112,243,512,343,90,478};
	cout<<"\nVILLAINS POWER\n";
	for(i=0;i<size;i++)
	{
		cout<<villains[i]<<" ";
	}
	cout<<"\nHEROES\tVILLAINS\tRESULT\n";
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(heroes[i]<heroes[j])
		    {
		      int  temp1=heroes[i];
		    	heroes[i]=heroes[j];
		    	heroes[j]=temp1;
		    }
		
		    if(villains[i]<villains[j])
		    {
		       temp=villains[i];
		    	villains[i]=villains[j];
		    	villains[j]=temp;
		    }
		
		
		}
	
	 
       if(villains[i]>heroes[i])
     { 
     	count++;
     	cout<<heroes[i]<<"\t"<<villains[i]<<"\t\t"<<"YOU LOSE\n";
	 }
	 else
	 {
	  	cout<<heroes[i]<<"\t"<<villains[i]<<"\t\t"<<"YOU WIN\n";	  	
     }
    }
    if(count>0)
    {
    	cout<<"AS YOU LOSES "<<count<<" OF THE GAMES\n";
     	cout<<"GAME OVER";
	}
	else
	{
		cout<<"AS YOU WON ALL THE GAMES\n";
	  	cout<<"CONGRATULATIONS:- YOU ARE WINNER ";	
	}
    
}
