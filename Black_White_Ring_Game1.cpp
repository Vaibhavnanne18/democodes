#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;
int n;

void leftshift(int start, int end, int a[])
{
    int first = a[start];
    for (int i = start; i < end; i++)
    {
        a[i] = a[i + 1];
    }
    a[end] = first;
}

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
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int b[(2 * n)];

        // Copy a[] to b[] two times
        for (int i = 1; i <=n; i++)
            b[i] = b[n + i] = a[i];

        // print from ind-th index to (n+i)th index.
        

        // if (a[n - 1] == a[n] && a[1] != a[n])
        // {
        //     for (int i = n; i >= 2; i++)
        //     {
        //     }
        // }
        // else if (a[1] == a[n] && a[1] != a[2])
        // {
        //     for (int i = 1; i <= n; i++)
        //     {
        //     }
        // }


        for (int i = 1; i <= n; i++)
        {
            if (b[n+i - 1] == b[n+i - 2] && b[n+i - 1] != b[n+i])
            {   
                int stop;
                for (int i =i;i<n+i;i++)
                {
                   if(a[i]==a[i+1]){
                      stop=i;
                   }
                }
            }
        }
    }
    return 0;
}