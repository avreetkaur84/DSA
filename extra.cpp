#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void output(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> arr;
        int i=0, j=0;
        while(i<n-1 && j<m-1) {
            if(i==0 && j==0) {
                if(arr1[i]<=arr2[j]) {
                    arr.push_back(arr1[i]);
                    // cout<<arr1[i];
                    i++;
                }
                else if(arr1[i]>=arr2[j]) {
                     arr.push_back(arr2[j]);
                     j++;
                }
            }
            
            if(arr1[i]<=arr2[j] && arr.back()!=arr1[i]) {
                arr.push_back(arr1[i]);
                i++;
            }
            else if(arr1[i]>=arr2[j] && arr.back()!=arr2[j]) {
                arr.push_back(arr2[j]);
                j++;
            }
            
            if(i==n && j!=m) {
                if(arr.back()!=arr2[j]) {
                    arr.push_back(arr2[j]);
                    j++;
                }
            }
            
            if(j==m && i!=n) {
                if(arr.back()!=arr1[i]) {
                    arr.push_back(arr1[i]);
                    i++;
                }
            }
            
        }
        
        return arr;
    }

int main()
{
    vector<int> arr;
    int arr1[] = {5, 3};
    int arr2[] = {1, 2, 3, 4, 5};
    
    arr = findUnion(arr1, arr2, sizeof(arr1), sizeof(arr2));
    output(arr);
}