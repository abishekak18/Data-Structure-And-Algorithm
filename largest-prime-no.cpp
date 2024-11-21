#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    for (int i = 2; i <= sqrt(num); ++i)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Function to find the largest prime in a range
int largestPrimeInRange(int L, int R)
{
    for (int i = R; i >= L; --i)
    {
        if (isPrime(i))
            return i;
    }
    return -1; // Return -1 if no prime number is found
}

int main()
{
    int L, R;
    cout << "Enter the range (L R): ";
    cin >> L >> R;

    int largestPrime = largestPrimeInRange(L, R);
    if (largestPrime != -1)
    {
        cout << "The largest prime number in the range [" << L << ", " << R << "] is: " << largestPrime << endl;
    }
    else
    {
        cout << "No prime number found in the range [" << L << ", " << R << "]." << endl;
    }

    return 0;
}
