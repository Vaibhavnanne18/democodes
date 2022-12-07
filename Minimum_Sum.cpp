#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        long int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];           
        }
        sort(a, a + n);
        long long int gcd1=__gcd(a[0],a[1]);
        for (ll i = 1; i < n ; i++)
        {  
          
           gcd1 = __gcd(a[i],gcd1);
        }
       
        
            cout << gcd1 * n << endl;
        
    }
    return 0;
}