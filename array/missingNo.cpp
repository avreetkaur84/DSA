// Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array

#include<iostream>
#include<vector>
using namespace std;


class Solution {
public:
    void sort(vector<int> &arr) {
        int n=arr.size();
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-i-1; j++) {
                if(arr[j]>arr[j+1]) {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    int missingNumber(vector<int>& nums) {
        sort(nums);

        // Normal case where element is missing in the middle
        if(nums[nums.size()-1]==nums.size() && nums[0]==0) {
            for(int i=nums[i]; i<nums.size(); i++) {
                if(nums[i]!=i) return i;
            }
        }

        // 0 is missing
        else if(nums[nums.size()-1]==nums.size()) return 0;

        // last no. is missing
        else if(nums[0]==0 && nums[nums.size()-1]!=nums.size()) 
            return nums.size();    

        return 0;
    }
};