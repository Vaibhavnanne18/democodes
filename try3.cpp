#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;
ll ans;

const int N = 1e6 + 7;
const int mod = 1e9 + 7;
 ll n, c;
vector<int> g[N];
void dfs(int i, int par) {
    ll init = c;
    if (i == 1) {
        init--;
    } else {
        init -= 2;
    }
    for (auto it : g[i]) {
        if (it != par) {
            cout<<i<<" " <<init<<endl;
            ans = (ans * init) % mod;
            init--;
            dfs(it, i);

        }
    }
}
signed main()
{
    cin >> n >> c;
    for(int i= 0;i< n - 1;i++) {
        ll u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ans = c;

    dfs(1, 0);

    cout << ans << endl;

}