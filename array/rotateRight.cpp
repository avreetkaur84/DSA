/*
    Rotate array to right by d index
    Algorithm (BRUTE FORCE)
    1. Store the elements in array that are supposed to be rotated
    2. Shift the elements to right by d index
    3. Merge the both arrays

    Second Solution - without using extra space
    1. Store the last element in a variable
    2. Shift the whole array by 1 index
    3. Insert the last stored element in zero index
    4. Repeat the process k times, k=number of position by which array is rotated

    Most Optimised Solution
    1. Reverse last k elements
    2. Reverse n-k elements
    3. Reverse the whole array
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

void reverseArray(vector<int> &arr, int start, int end)
{
    int i = start;
    int j = end;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void rotate(vector<int> &nums, int k)
{
    int size = nums.size();

    /*
        Brute force Solution
        // Storing the elements in temporary array
        vector<int> temp(d);
        for(int i=size-d; i<size; i++) {
            temp[i-size+d] = arr[i];
        }

        // Shifting the elements to right by d index
        for(int i=size-1; i>=d; i--) {
            arr[i] = arr[i-d];
        }

        // Merging the arrays
        for(int i=0; i<d; i++) {
            arr[i] = temp[i];
        }
    */

    /*
        // Second Solution
        for(int i=0; i<k; i++) {
            int value = nums[size-1];
            for(int j=size-1; j>=0; j--) {
                nums[j] = nums[j-1];
            }
            nums[0] = value;
        }
    */

    // Third Solution

    if (size == 1)
        return;

    if (size < k)
    {
        k = k % size;           //don't know main logic behind this
    }

    // Reverse last k elements
    reverseArray(nums, size - k, size - 1);
    // Reverse n-k elements
    reverseArray(nums, 0, size - 1 - k);
    // Reverse whole array
    reverseArray(nums, 0, size - 1);
}

int main()
{
    vector<int> arr;
    input(arr);
    output(arr);

    int d;
    cout << "Enter by which position you want to rotate array to right: ";
    cin >> d;

    rotate(arr, d);
    output(arr);
}