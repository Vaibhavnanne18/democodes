#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, al = 0, bl = 0;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                al++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] == 1)
            {
                bl++;
            }
        }
        //    sort(a,a+n);
        //    sort(b,b+n);
        int count = abs(bl - al);
        int change = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                change++;
            }
        }
        if(change > count ){
            count++;
        }
        cout << count << endl;
    }
    return 0;
}