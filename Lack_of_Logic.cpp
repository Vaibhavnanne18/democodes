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
    getchar();
    vi letters(27, 0);
    while (t--)
    {
        string s;
        getline(cin, s);
        // cout<<s<<endl;
        for (int alpha = 0; alpha < s.size(); alpha++)
        {
            // cout<<(int)s[i]<<" ";
            
                if ((s[alpha] >='a' && s[alpha] <='z' ) && letters[alpha] != 1)
                {
                    letters[s[alpha]-'a'] = 1;
                }
                else if((s[alpha] >='A' && s[alpha] <='Z' ) && letters[alpha] != 1)
                {
                    letters[s[alpha]-'A'] = 1;
                }
        }

        // for (int i = 1; i < 27; i++)
        // {
        //     cout <<i<<" ->"<< letters[i] << " " << (char)(64 + i) << endl;
        // }
        //cout<<s<<" ->";
        for (int i = 1; i < 27; i++)
        {
            if (letters[i]!=0)
            {
                //char a = (char)('a' + i-1);
                 cout<<(char)('a'+i);
            }
        }
        if(*max_element(letters.begin(), letters.end()) !=0 ){
            cout<<endl;
        }
        else
            cout<<"~"<<endl;
    }
    return 0;
}