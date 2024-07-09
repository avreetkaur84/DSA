#include <iostream>
#include <map>
using namespace std;

int main() {
    int n, q;

    cout<<"Enter Size of array and its element: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
        cin>>arr[i];
    }

    // precomputing
    map<int, int>  mpp;
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }

    cout<<endl<<"Enter the total numbers whose frequency you want to compute and then enter numbers: ";
    cin>>q;
    for(int i=0; i<q; i++) {
        int number;
        cin>>number;
        cout<<"Frequency of "<<number<<" : "<<mpp[number]<<endl;            //fetching
    }

}