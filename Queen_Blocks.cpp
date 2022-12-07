#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

int board[7][7];

vector<pair<int, int>> ans;
bool isvalid(int x, int y)
{
    if (x >= 0 && y >= 0 && x <= 7 && y <= 7)
    {
        return true;
    }
    return false;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            board[i][j]=0;
        }
    }

    vector<pair<int, int>> moves = {{1, 2}, {-1, 2}, {1, -2}, {-1, -2}};

    int t = 1;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        board[a][b] = 1;
        for (auto value : moves)
        {
            int x = a + value.first;
            int y = b + value.second;
            if (isvalid(x, y))
            {
                ans.push_back({x, y});
            }
        }

        // if((a==0 && b==0) || (a==0 && b==7) || (a==7 && b==0) || (a==7 && b==0)){
        //      auto pair=ans[0];
        //      board[pair.first][pair.second]=2;
        // }
        // else{
        //      auto pair=ans[0];
        //      board[pair.first][pair.second]=2;
        //       auto pair1=ans[1];
        //      board[pair1.first][pair1.second]=2;
        // }

        for (int i = 0; i <= 7; i++)
        {
            for (int j = 0; j <= 7; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}