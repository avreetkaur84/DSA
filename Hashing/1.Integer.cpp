// hasing is used for counting teh frequency of a number. It first makes a hash array of the total range of numbers that we want to calculate the frequency of. Then it will do the pre-calculation, in which it will store in the hash array how many times a particular number appears. So, when we need need to calculate frequency of a number, we will simply check the value stored in the hash array at that number's index

#include <iostream>
#include <vector>
using namespace std;

void display(int arr[], int size) {
    cout<<"Array elements are: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    int totalNumFreq, num;
    int arr[] = {2, 3, 6, 3, 2, 1, 5, 1};
    display(arr, 8);

    // Precompute
    int hash[7] = {0};
    for(int i=0; i<8; i++) {
        hash[arr[i]] += 1;
    }

    display(hash, 7);

    cout<<"Enter how many numbers frequency you want to check";
    cin>>totalNumFreq;

    cout<<"Enter the numbers to know their frequency: "<<endl;
    for(int i=0; i<totalNumFreq; i++) {
        cin>>num;
        cout<<"Frequency of "<<num<<": "<<hash[num]<<endl;          //fetching
    }
}