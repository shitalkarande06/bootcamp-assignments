#include <iostream>
using namespace std;

int main()
{

    int i, n;
    int isPrime = true;

    cout << "Enter a positive number : ";
    cin >> n;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
         isPrime = false;
    }

    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
             isPrime = false;
            break;
        }
    }
    if ( isPrime )
    {
        cout << n << " is a prime number";
    }
    else
    {
        cout << n << " is not a prime number";
    }

    return 0;
}
