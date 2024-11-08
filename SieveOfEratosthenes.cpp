#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

bool prime[200001];

void SieveOfEratosthenes() {

    memset(prime, true, sizeof(prime));

    for (ll p = 2; p * p <= 200000; p++) {

        if (prime[p] == true) {

            for (ll i = p * p; i <= 200000; i += p) {

                prime[i] = false;

            }

        }

    }

}