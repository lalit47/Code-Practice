//Given an integer N and an array seats[] where N is the number of people standing in a line to buy a movie ticket and seat[i] is the number of empty seats in the ith row of the movie theater. The task is to find the maximum amount a theater owner can make by selling movie tickets to N people. Price of a ticket is equal to the maximum number of empty seats among all the rows.

/*Input Format

Input: Decide Input size for seats[] seats[] = {1, 2, 4}, N = 3

Constraints

0

Output Format

Output: 9

Sample Input 0

1 2 4 
N = 3
Sample Output 0

9
Explanation 0

PERSON  EMPTY SEATS TICKET COST
1       1       2       4   4
2       1       2       3   3
3       1       2       2   2

4 + 3 + 2 = 9
Sample Input 1

2 3 5 3
N = 4
Sample Output 1

15
*/

 

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N=4;
    int seats[N];
    for(int i=0;i<N;i++)
    {
        cin>>seats[i];
    }
    if(seats[N-1]==0)
    {
        N=N-1;
    }
    
    int cost=N;
    for(int i=0;i<N-1;i++)
    {
        for(int j=i;j<N;j++)
        {
         if(seats[i]>seats[j])
         {
             int temp=seats[i];
             seats[i]=seats[j];
             seats[j]=temp;
             
         } 
        }
             
    }
    for(int j=N-1;j>0;j--)
    {
        cost = cost + seats[j];
    }
    cout<<cost;
    return 0;
}

