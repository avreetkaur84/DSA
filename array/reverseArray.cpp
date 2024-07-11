// Reverse an array

#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int> &arr) {
    int i=0;
    int j=arr.size()-1;

    while(i!=j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void output(vector<int> arr)
{
    cout<<"Array elements are: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {1,2,3,4,5};
    output(arr);
    reverseArray(arr);
    output(arr);
}