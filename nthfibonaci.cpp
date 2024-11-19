#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << 1 << endl;
    }
    else
    {
        int prev1 = 1, prev2 = 1;
        for (int i = 3; i <= n; ++i)
        {
            int current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        cout << prev2 << endl;
    }

    return 0;
}