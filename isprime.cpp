#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

bool isPrime(ll n) {

    if (n <= 1)

        return false;

    for (ll i = 2; i <= n / 2; i++)

        if (n % i == 0)

            return false;

    return true;

}