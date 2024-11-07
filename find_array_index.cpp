#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

ll find_index(ll x, ll arr[], ll n) {

    for (ll i = 0; i < n; i++) {

        if (arr[i] == x) {

            return i;

        }

    }

    return 0;

}