/*
    Algorithm
    1. find the largest number using single traversal.
    2. for second largest, condition: arr[i] < max but arr[i] > secondMax
    3. We can't keep secondMax as arr[0] bcz. arr[0] can be the max no., so we have to use cmath class from here we can use the lowest int number that can be used as secondMax.
*/



//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
// User function template for C++
#include <cmath>

class Solution {
  public:
    int largest(vector<int> &arr) {
        int max = arr[0];
        for(int i=1; i<arr.size(); i++) {
            if(max<arr[i]) {
                max = arr[i];
            }
        }
        return max;
    }
    
    int print2largest(vector<int> &arr) {
        if(arr.size() == 1) return -1;
        int max = largest(arr);
        int secondMax = INT_MIN;
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]<max && arr[i]>secondMax) {
                secondMax = arr[i] ;
            }
        }
        return secondMax;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends