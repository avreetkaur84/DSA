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
   
    vector<int> arr;
    for(int i=0; i<5; i++) {
        cin>>arr[i];
    }

    Solution ob;
    int ans = ob.print2largest(arr);
    cout<<ans;
        
    
    return 0;
}

// } Driver Code Ends