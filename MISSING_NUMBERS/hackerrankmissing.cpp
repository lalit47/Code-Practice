//Given a list of integers from the range [1, N] with some of the elements missing. The task is to find the missing elements. Note that there can be duplicates in the list.

/*Input Format

Input: Decide Input size for array arr[]

arr[] = {1, 3, 3, 3, 5}

Input: Decide Input size for array arr[]

arr[] = {1, 2, 3, 4, 4, 7, 7}

Constraints

0<=n<=10

Output Format

Output: 2 4

Output: 5 6

Sample Input 0

1 3 3 3 5
Sample Output 0

2 4
Sample Input 1

1 2 3 4 4 7 7
Sample Output 1

5 6*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{ 
    int arr[10] = {0};
    int count = 0;
      
       for(int i=0;i<10;i++)
       { 
          cin>>arr[i];
       }
    
    for(int j=0;j<10;j++){
        if(arr[j]!=0)
            count++;
    }
    
    
    
     for(int i=1;i<=count;i++)
     {
         if(i!=arr[i-1])
         {
             cout<<i<<" ";
         }
     }
    
    return 0;
}
 
