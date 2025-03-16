// Problem: Checking if a number is prime or not (Using Boolean Operator and for loop)
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    // Checking for 1 & bellow 1
    if (n <= 1)
    {
        cout << n << "is not a prime number";
        return 0;
    }
    // Checking all other possible values
    bool isPrime = true;
    int i;
    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime == true)
    {
        cout << n << " is a prime number \n";
    }
    else
    {
        cout << n << " is not a prime number\n";
    }

    return 0;
}
