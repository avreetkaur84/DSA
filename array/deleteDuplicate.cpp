/*
    Remove Duplicates from Sorted Array
*/

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
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void shift(vector<int> &arr, int start)
{
    int size = arr.size();
    for (int i = start; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr.erase(arr.begin() + arr.size() - 1);
    // cout<<arr[2];
    if (arr.size() == 1)
        return;
    if (arr[start] == arr[start + 1] && start != arr.size() - 1)
    {
        shift(arr, start);
    }
}

int removeDuplicates(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            shift(arr, i);
        }
    }
    int k = arr.size();
    return k;
}

int main()
{
    vector<int> arr;
    input(arr);
    // output(arr);

    removeDuplicates(arr);
    cout << endl;
    output(arr);
}