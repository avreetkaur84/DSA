#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int isPrime(int N)
{
    if (N == 1)
        return 0;
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
            return 0;
    }
    return 1;
}

void primeList(int N, vector<int> &arr) {
    for(int i=2; i<N; i++) {
        if(isPrime(i)) {
            arr.push_back(i);
        }
    }
}

void displayArr(vector<int> arr, int N)
{
    cout << "Array elements are: ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main()
{
    vector<int> arr;
    primeList(100, arr);
    displayArr(arr, 100);
}