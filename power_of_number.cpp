#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;

ll powerofnumber(ll n, ll p) {

    ll g = p, ans = 0;

    while (g <= n) {

        ans += n / g;

        g *= p;

    }

    return ans;

}