#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

ll gcd(ll a, ll b) {

    if(b == 0){

        return a;

    }else{

        return gcd(b, a % b);

    }

}