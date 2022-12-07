#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

// string convert(string s)
// {
//     int n = s.size();
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             if (s[i] > s[j])
//             {
//                 int temp = s[i];
//                 s[i] = s[j];
//                 s[j] = temp;
//             }
//         }
//     }
//     return s;
// }

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

        for (int i = 0; i < s1.length(); i++)
        {
            int x = s.find(s1[i]);
            s.erase(x, 1);
            // cout<<s<<endl;
        }

        string result;
        // int j=0;
        // for(int i=0; i<s1.length();i++)
        // {

        // }

        sort(s.begin(), s.end());
        // cout << s << endl;
        char start = s1[0];
        int high = s.size() - 1, low = 0;
        // while(high-low>1){
        //    int mid=(high+low)/2;
        //    if((start>s[mid])){
        //        low=mid+1;
        //    }
        //    else{
        //        high=mid;
        //    }
        // }
        // cout << start << endl;
        bool isinsert = false;
        // cout << start << endl;
        int temp;
        for (int i = 0; i < high; i++)
        {
            if (s[i] <= start && s[i + 1] != s[i] && s[i + 1] > start)
            {
                temp = i;
                break;
            }
        }
        cout<<s<<endl;
        string r = s.substr(0, temp + 1);
        string r1 = s.substr(temp + 1, high + 1);
        r = r + s1 + r1;
        //     if(!isinsert){
        //     //        s.insert(high+1, s1);
        //     //     }
        //     // if(s[high]==start){

        //     // }
        //     // else if(s[low]==start){
        //     //     {
        //     //     s.insert(low,s1);
        //     // }
        //     // }

        // }
        cout << r << endl;
    }
        return 0;
    }