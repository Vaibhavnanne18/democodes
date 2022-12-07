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
        string s1, s2, s;
        cin >> s1 >> s2;
        int high = s1.size();
        int count = 0;
        for (int i = 0; i < high; i++)
        {
            if (s1[i] == s2[i])
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
        }
        // cout << s << endl;
        for (int i = 0; i < high - 2; i++)
        {
            if (s[i] == '0' && s[i + 2] != '0')
            {
                count++;
            }
        }
        // cout << count << " ";
        if (s[high - 1] == '0')
        {
            count++;
            // cout << 1 << "->";
        }

        if (s[high - 2] == '0')
        {
            count++;
            // cout << 2 << "->";
        }

        cout << count << endl;
        // cout << endl;
    }
    return 0;
}