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
        int n;
        cin >> n;
        // cout<<(n/x)%2<<endl;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            m[x]++;
        }
        int max_repeat = -1;
        for (auto value : m)
        {
            if ((value).second > max_repeat)
            {
                max_repeat = (value).second;
            }
        }
       // cout<<max_repeat<<endl;
        if (n % 2 == 0 && max_repeat <= n / 2)
        {
            cout << "Yes" << endl;
        }
        else if (n % 2 != 0 && max_repeat <= n / 2 + 1)
        {
            cout << "Yes" << endl;
        }
        else{
         cout<<"No" << endl;
        }
    }
    return 0;
}