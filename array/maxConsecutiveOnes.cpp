#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> arr;
        int counter=0;
        for(int i=0; i<nums.size(); i++) {
            while(nums[i]==1) {
                counter++;
                i++;
            }
            if(counter!=0) {
                arr.push_back(counter);
                counter=0;
            }
        }

        int max=arr[0];
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]>max) max=arr[i];
        }

        return max;
    }
};

int main() {
    vector<int> arr = {1,1,0,1};
    Solution obj;
    int x = obj.findMaxConsecutiveOnes(arr);
    cout<<x;
}