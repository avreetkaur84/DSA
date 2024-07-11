/*
    Given a number N. Find if it can be expressed as sum of two prime numbers.
        Brute Force Algorithm
    1. Create an array of prime numbers till N
    2. By traversing that array check whether the sum of two numbers is N

        Second Method
    1. Create an array of prime numbers till N
    2. Take first prime number, subtract it from N, you will get another number
    3. Check if the number you have gotten is prime, if yes, then both number are prime and they together make up N.
*/

#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// Brute Force Solution
// class Solution
// {
// public:
//     bool isPrime(int N)
//     {
//         if (N == 1)
//             return false;
//         for (int i = 2; i <= sqrt(N); i++)
//         {
//             if (N % i == 0)
//                 return false;
//         }
//         return true;
//     }

//     void primeList(int N, vector<int> &arr)
//     {
//         for (int i = 0; i < N; i++)
//         {
//             if (isPrime(i))
//             {
//                 arr.push_back(i);
//             }
//         }
//     }

//     string isSumOfTwo(int N, vector<int> &arr)
//     {
//         primeList(N, arr);
//         for (int i = 1; i < arr.size(); i++)
//         {
//             for (int j = 1; j < arr.size(); j++)
//             {
//                 int value = arr[i] + arr[j];
//                 if (value == N)
//                 {
//                     cout << "Yes" << "  ";
//                     cout << arr[i] << "," << arr[j] << endl;
//                 }
//             }
//         }
//         cout << "No" << "   " << endl;
//     }

//     void displayArr(int N, vector<int> &arr)
//     {
//         cout << "Array elements are: ";
//         for (int i = 0; i < arr.size(); i++)
//         {
//             cout << arr[i] << "  ";
//         }
//         cout << endl;
//     }
// };


// Second Method
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
        for (int i = 0; i < arr.size(); i++)
        {
            int value = N-arr[i];
            if(isPrime(value)) {
                cout << "Yes" << "   " << endl;
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