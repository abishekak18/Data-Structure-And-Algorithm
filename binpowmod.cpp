#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;

ll MOD = 998244353;
ll mod = 1e9 + 7;

ll binpowmod(ll a, ll b) {

    a %= mod;

    ll res = 1;

    while (b > 0) {

        if (b & 1) {

            res = (res * a) % mod;

        }

        a = (a * a) % mod;

        b >>= 1;

    }

    return res;

}