#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isPrime(int N)
    {
        if (N == 1)
            return false;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (N % i == 0)
                return false;
        }
        return true;
    }

    void primeList(int N, vector<int> &arr)
    {
        for (int i = 0; i < N; i++)
        {
            if (isPrime(i))
            {
                arr.push_back(i);
            }
        }
    }

    string isSumOfTwo(int N, vector<int> &arr)
    {
        primeList(N, arr);
        for (int i = 1; i < arr.size(); i++)
        {
            for (int j = 1; j < arr.size(); j++)
            {
                int value = arr[i] + arr[j];
                if (value == N)
                {
                    cout << "Yes" << "  ";
                    cout << arr[i] << "," << arr[j] << endl;
                }
            }
        }
        cout << "No" << "   " << endl;
    }

    void displayArr(int N, vector<int> &arr)
    {
        cout << "Array elements are: ";
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << "  ";
        }
        cout << endl;
    }
};

int main()
{
    vector<int> arr;
    int N = 4;
    Solution ob;
    ob.isSumOfTwo(N, arr);
    ob.displayArr(N, arr);
}