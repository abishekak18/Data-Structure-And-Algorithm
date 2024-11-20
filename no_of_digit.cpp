#include <bits/stdc++.h> 
using namespace std;

int countDigits(int n)
{
    // Write your code here.
    int count = 0;

    if (n < 0)
        n = -n;

    do
    {
        count++;
        n /= 10;
    } while (n > 0);

    return count;
}

int main(){
    int n;
    cin >> n;
    cout << countDigits(n) << endl;
    return 0;
}