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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
            cin >> b[i];
        {
        }

        ll moves_a = 0;
        ll moves_b = 0;

        for (int i = 0; i < n; i++)
        {  
            if((a[i] - b[i])>0){
            moves_a+= (a[i] - b[i]);

            }else if((a[i] - b[i])<0){
            moves_b+= abs(a[i] - b[i]);
            }
        //    cout<<a[i] - b[i]<<" ";
        }

        if(moves_a==moves_b){
            cout<<moves_a<<endl;
        }
        else{
        cout << -1 << endl;

        }
    }
    return 0;
}