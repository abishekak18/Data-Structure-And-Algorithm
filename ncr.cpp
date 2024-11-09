#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

ll MOD = 998244353;
ll mod = 1e9 + 7;

ll moduloMultiplication(ll x, ll y) {

    ll res = 1;

    x = x % mod;

    while (y > 0) {

        if (y & 1) {

            res = (res * x) % mod;

        }

        y = y >> 1;

        x = (x * x) % mod;

    }

    return res;

}

ll modInverse(ll n) {

    return moduloMultiplication(n, mod - 2);

}



ll nCr(ll n, ll r) {

    if (n < r) {

        return 0;

    }

    if (r == 0) {

        return 1;

    }

    ll fac[n + 1];

    fac[0] = 1;

    for (ll i = 1; i <= n; i++) {

        fac[i] = (fac[i - 1] * i) % mod;

    }

    return (fac[n] * modInverse(fac[r]) % mod * modInverse(fac[n - r]) % mod) % mod;

}