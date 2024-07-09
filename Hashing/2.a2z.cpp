#include <iostream>
#include <string>
using namespace std;

void display(string arr) {
    for(int i=0; i<arr.length(); i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void display(int arr[], int size) {
    cout<<"Array elements are: ";
    for(int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    char ch;
    string arr = "aaedkvihwrffksk";
    display(arr);

    int hash[26] = {0};
    for(int i=0; i<arr.length(); i++) {
        hash[arr[i]-'a'] += 1;
    }

    cout<<"Enter 'N' to exit"<<endl;
    do{
        cout<<"Enter the character whose frequency you want to find: ";
        cin>>ch;
        cout<<char(ch)<<" frequency: "<<hash[ch-'a']<<endl;
    }while(ch != 'N');
}