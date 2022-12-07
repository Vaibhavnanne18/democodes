#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;
const int N = 1e6 + 7;
const int mod = 1e9 + 7;
int n, c;
vector<int> tree[N];
vi vis(N, 0);
vi level(N, 0);

vi ans;
void dfs(int vertex, int parent = 0)
{
    vis[vertex] = 1;
    int count = 0;
    for (int child : tree[vertex])
    {
        if (vis[child])
            continue;
        count++;
        level[child] = level[vertex] + 1;
        // cout<<vertex<<" "<<child<<" "<<count<<endl;
        // cout<<child<<" "<<level[child]<<endl;
        if (vertex == 1)
        {
            int value = c - count;
            ans.push_back(value);
        }
        else
        {
            int value = c - count - 1;
            ans.push_back(value);
        }
        dfs(child, vertex);
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> c;
    // cout << n << c;

    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        tree[x].push_back(y);
        tree[y].push_back(x);
    }
    dfs(1);
    long long int answer = c;
    for (int child : ans)
    {
        // cout<<child<<endl;
        if (child > 0)
        {
            answer = (answer * child) % mod;
            // answer*=child%mod;
        }
    }

/// answer=(answer*c)%mod;
cout << answer % mod << endl;

return 0;
}
