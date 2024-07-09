/*
    Rotate array to left by d index
    Algorithm
    1. Store the array numbers that are supposed to rotate in temporary array
    2. Shift the main array by d index to left
    3. Merge the main array and temporary array
    **Did mistake in dealing with index:  arr[size-d+i] = temp[i];
*/

#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &arr) {
    int size;
    cout<<"Array size: "; cin>>size;
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<size; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }
}

void output(vector<int> arr) {
    for(int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rotate(vector<int> &arr, int d) {
    int size = arr.size();
    // store no. in temporary array
    vector<int> temp(d);
    for(int i=0; i<d; i++) {
        temp[i] = arr[i];
    }

    // shifting the elements by d index
    for(int i=d; i<size; i++) {
        arr[i-d] = arr[i];
    }

    // merging the arrays
    for(int i=0; i<size; i++) {
        arr[size-d+i] = temp[i];
    }
}

int main() {
    vector<int> arr;
    input(arr);
    output(arr);

    int d;
    cout<<"Enter by which position you want to rotate array to left: ";
    cin>>d;

    rotate(arr, d);
    output(arr);
}