//program to store array inside array and printing values at ith index:
#include<iostream>
#include<stdlib.h>
using namespace std;
int main(int argc, char *argv[]) {
    int n;
    int q;
    cin >> n >> q;
    
    // Create an array of pointers to integer arrays 
    // (i.e., an array of variable-length arrays)
    int** outer = new int*[n];

    // Fill each index of 'outer' with a variable-length array
    for(int i = 0; i < n; i++) {
        int k;
        
        // Create an array of length 'k' at index 'i'
        outer[i] = new int[k];
          cin >> k;
        // Fill each cell in the 'inner' variable-length array
        for(int j = 0; j < k; j++) {
            cin >> outer[i][j];
        }
    }

    // Perform queries:
    while(q-- > 0) {
        int outer_index;
        int inner_index;
        cin >> outer_index >> inner_index;
        
        // Find the variable-length array located at outer_index
/*2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3*/
        // and print the value of the element at inner_index.
        cout << outer[outer_index][inner_index] << endl;
    }
    return 0;
}
