#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& arr) {
        int j=-1;
        // Finding first zero
        for(int i=0; i<arr.size(); i++) {
            if(arr[i]==0) {
                j=i;
                break;
            }
        }

        if(j==-1)   return;

        // Swaping zero with non-zero
        for(int i=j+1; i<arr.size(); i++) {
            if(arr[i]!=0) {
                // swap(arr[i], arr[j]);
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                j++;
            }
        }
    }

int main() {
    // call the function here
}