#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;

ll binarySearch(v64 v, ll key) {

    ll low = 0;

    ll high = v.size() - 1;

    while (low <= high) {

        ll mid = low + (high - low) / 2;

        if (v[mid] == key) {

            return mid;

        }

        if (v[mid] < key) {

            low = mid + 1;

        } else {

            high = mid - 1;

        }

    }

    return -1;

}