/* Suppose a class faculty always addresses the last three students in a row and asks them to shift to the first bench. Implement the scenario in c++ and creaet a function that can help faculty to always shift 'n' number of last benchers from the count x students in a classroom row */

#include <iostream>
#include <vector>
using namespace std;

void output(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



int main() {
    vector<int> arr = {1, 2, 3, 4 ,5 ,6 , 7, 8, 9};
    // shift(arr, 3);
    output(arr);
}