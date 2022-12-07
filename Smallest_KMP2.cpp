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
        string s, s1;
        cin >> s >> s1;
        char start = s1[0];
        map<char, int> m;
        int high = s.size();
        for (int i = 0; i < high; i++)
        {
            m[s[i]]++;
        }
        int high1 = s1.size();
        for (int i = 0; i < high1; i++)
        {
            m[s1[i]]--;
        }
        string ans;
        for (auto value : m)
        {
            while (value.second--)
            {
                ans += (value.first);
            }
        }
        int temp;
        for (int i = 0; i < high; i++)
        {
            if (ans[i] <= start && ans[i + 1] > start)
            {
                temp = i;
                break;
            }
        }
        string r = ans.substr(0, temp + 1);
        string r1 = ans.substr(temp + 1, high + 1);
        r = r + s1 + r1;
        // cout << ans[temp]<< " " << r << endl;
                cout << r << endl;

    }
    return 0;
}