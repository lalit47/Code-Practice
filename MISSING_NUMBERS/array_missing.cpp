#include<iostream>
using namespace std;

int main() 
{ 
    int N;
    int arr[N];
    cout<<"enter the size of array";
    cin>>N;
    int count = 0;
      
       for(int i=0;i<N;i++)
       { 
          cin>>arr[i];
       }
    
    for(int j=0;j<N;j++){
        if(arr[j]!=0)
            count++;
    }
    
    
    
     for(int i=1;i<=count;i++)//it is  checking  the sequence of numbers(1,2,3,4,5,6,7)
     {
         if(i!=arr[i-1])
         {
             cout<<i<<" ";
         }
     }
    
    return 0;
}
