#include <iostream>
#include <vector>
using namespace std;

/*
    Algorithm
    1. Store the zero index value in a variable
    2. Shift the numbers by 1 index; arr[i] = arr[i+1]
    3. Be careful with the size especially in for loop condition(means till what point you want the value of i), **did mistake in this part**
*/


int main() {
    vector<int> arr = {1,2,3,4,5};
    int x = arr[0];
    int size = arr.size();

    // shifting
    for(int i=0; i<size-1; i++) {
        arr[i] = arr[i+1];
    }

    arr[size-1] = x;

    // printing array
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}