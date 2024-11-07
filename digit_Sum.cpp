#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;

ll digitSum(ll number) {

    ll total = 0;

    while (number > 0) {

        total += number % 10;

        number /= 10;

    }

    return total;

}