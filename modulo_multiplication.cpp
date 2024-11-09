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