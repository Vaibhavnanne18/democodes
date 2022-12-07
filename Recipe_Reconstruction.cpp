#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

const int mod = 10000009;

int palindrome(string s)
{
    ll ans = 1;
    float length = s.size();
    bool isvalid = true;
    for (int i = 0; i < (ceil)(length / 2); i++)
    {
        //cout << i << " " << ans << endl;
        // cout<<i<<" "<<s[i] <<" "<<s[length - i - 1]<<endl;
        if (s[i] == s[length - i - 1] || s[i] == '?' || s[length - i - 1] == '?')
        {
            if (s[i] != s[length - i - 1] && s[i] == '?')
            {
                continue;
            }
            else if (s[i] != s[length - i - 1] && s[length - i - 1] == '?')
            {
                continue;
            }
            else if (s[i] == s[length - i - 1] && s[i] == '?' && s[length - i - 1] == '?')
                ans = (ans * 26) % mod;
            else
            {
                continue;
            }
        }

        else
        {
            isvalid = false;
            break;
        }
    }
    if (isvalid)
    {
        return ans % mod;
    }
    else
    {
        return 0;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << palindrome(s) << endl;
    }
    return 0;
}