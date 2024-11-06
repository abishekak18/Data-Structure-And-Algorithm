#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

bool iscomposite(ll n){

    ll c = 0;

    for (ll i = 1; i <= n; i++) {

        if (n % i == 0)

            c++;

    }

    if(c > 2){

        return true;

    }

    return false;

}