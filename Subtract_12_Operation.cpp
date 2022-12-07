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
        int length;
        cin >> length;
        int a[length];
        for (int i = 0; i < length; i++)
        {
            cin >> a[i];
        }
    for (int i = length - 1; i > 0; i--)
    {
        if (a[i] > 0)
        {
            ll k=a[i]/2;
            a[i] -= k*2;
            a[i - 1]-=k;
        }
    }
    for (int i = length - 1; i > 0; i--)
    {
        if (a[i] > 0 && a[i-1]>0)
        {
            a[i] -= 2;
            a[i - 1]--;
        }
    }
    ll ans=0;
    for (int i = 0; i < length; i++)
    {
       ans+=abs(a[i]);
    }
    cout<<ans<<endl;
    }
    return 0;
}