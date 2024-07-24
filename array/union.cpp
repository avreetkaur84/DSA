/*
    Find the union of two array, no element should be repeated and array should be sorted
    arr1, arr2, resultant array- arr
    Algorithm   (BRUTE FORCE)
    1. Placed all the arr1 elements in the arr
    2. Placed all the elements that were not present in the arr1 in arr from arr2
    3. Sorted the array
    4. Removed duplicate elements
    5. Deleted the extra elements
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

void removeDuplicate(vector<int> &arr)
{
    int size = arr.size();
    int i = 0;
    for (int j = 0; j < size; j++)
    {
        if (arr[i] != arr[j])
        {
            i = i + 1;
            arr[i] = arr[j];
        }
    }
    // Removing extra elements
    arr.erase(arr.begin() + i + 1, arr.end());
}

void sort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = 0; j < arr.size() - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    vector<int> arr;
    // placed all arr1 elements in arr
    for (int i = 0; i < n; i++)
    {
        arr.push_back(arr1[i]);
    }

    // placed elements that were not present in arr1 in arr from arr2
    for (int j = 0; j < m; j++)
    {
        for (int k = 0; k < n; k++)
        {
            if (arr2[j] == arr1[k])
            {
                break;
            }
            if (arr2[j] != arr1[k] && k == n - 1)
            {
                arr.push_back(arr2[j]);
            }
        }
    }
    sort(arr);
    removeDuplicate(arr);

    return arr;
}

int main()
{
    vector<int> arr;
    int arr1[] = {5, 3};
    int arr2[] = {1, 2, 3, 4, 5};

    output(arr);
}