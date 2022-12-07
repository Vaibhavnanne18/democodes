#include <bits/stdc++.h>
using namespace std;

signed main()
{

    long int n;
    cin >> n;
    while (n--)
    {
        long long int ans;
        cin >> ans;
        if (ans % 2 != 0)
        {

            cout << (ans / 2) * ((ans / 2) + 1) * 2 << endl;
        }
        else
        {
            cout << (ans / 2) * (ans / 2) * 2 << endl;
        }
    }
    return 0;
}