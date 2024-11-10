#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;

v64 factors(ll x) {

v64 ans;

int i = 1;

while (i * i <= x) {

    if (x % i == 0) {

        ans.push_back(i);

        if (x / i != i) {

            ans.push_back(x / i);

        }

    }

    i++;

}

return ans;

}