#include <iostream>
#include <vector>
using namespace std;

void input(vector<int> &arr)
{
    int size;
    cout << "Array size: ";
    cin >> size;
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < size; i++)
    {
        int value;
        cin >> value;
        arr.push_back(value);
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

bool ifSorted(vector<int> arr) {
    int k = 0;
        int size = arr.size();
        for(int i=0; i<size-1; i++) {
            if(k>=1 && arr[0]<arr[i]) {
                cout<<"Not Sorted";
                return false;
            }
            if(arr[i]>arr[i+1]) k++;
            if(k>=1 && arr[0]<arr[size-1])  {
                cout<<"Not Sorted";
                return false;
            }
            if(k>1) {
                cout<<"Not Sorted";
                return false;
            }
        }
        cout<<"Sorted";
        return true;
}

int main() {
    vector<int> arr;
    input(arr);
    output(arr);
    ifSorted(arr);
}