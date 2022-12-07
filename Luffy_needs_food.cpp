#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main()
{
    ios_base::sync_with_stdio(false);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int k, n;
        cin >> n;
        ll f;
        cin >> k >> f;
        vector<pair<int, int>> distance;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            distance.push_back({k - x, y});
        }
        sort(distance.begin(), distance.end());
        // // int radius = f;
        bool flag = false;
        int stop = 0;
        multiset<int> food;
        int curr = 0;
        for (int i = 1; i < k; i++)
        {
            f--;
            // cout << stop << " " << radius << endl;
            if (distance[curr].first == i)
            {
                food.insert(distance[curr].second);
                curr++;
            }
            //cout << f << " " << endl;

            //     // cout << radius << " " << use << endl;
            if (f == 0)
            {
                if (food.empty())
                {
                    cout << -1 << endl;
                    flag = true;
                    break;
                }
                else
                {
                    auto use = --food.end();
                    f += *use;
                    food.erase(use);
                    stop++;
                }
            }
        }
        if (!flag)
        {
            cout << stop << endl;
        }
    }
}

// #include <bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int, int> pll;
// typedef vector<int> vi;
// typedef vector<long long int> vll;

// signed main()
// {
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         int k, n;
//         cin >> n;
//         ll f;
//         cin >> k >> f;
//         // cout<<k<<" "<<f<<endl;
//         map<int, int> distance;
//         for (int i = 0; i < n; i++)
//         {
//             int x, y;
//             cin >> x >> y;
//             distance[k - x] = y;
//         }

//         // for (auto it = distance.begin(); it != distance.end(); ++it)
//         //     cout << it->first << " => " << it->second << '\n';
//         int radius = f;
//         int f = f;
//         bool flag = false;
//         bool first_torque = false;
//         //  cout<<k-f<<" "<<radius<<endl;
//         int stop = 0;
//         multiset<int> food;
//         int curr = 0;
//         for (int i = 1; i < k; i++)
//         {
//             if (radius >= k)
//             {
//                 break;
//             }
//             f--;
//             // cout << stop << " " << radius << endl;

//             auto it = distance.upper_bound(radius);
//             // if(it!=distance.begin())
//             //    { it--;}
//             if (!first_torque)
//             {
//                 for (auto itr = distance.begin(); itr != it; itr++)
//                 {
//                     food.insert(itr->second);
//                 }
//             }
//             first_torque = true;
//             {
//                 it--;
//             }
//             food.insert(it->second);
//             if (food.empty())
//             {
//                 cout << -1 << endl;
//                 flag = true;
//                 break;
//             }
//             auto use = *food.rbegin();
//             // cout << radius << " " << use << endl;
//             if (f <= 1)
//             {
//                 radius += use;
//                 f += use;
//                 food.erase(use);
//                 stop++;
//             }
//             // cout<<stop<<" "<<radius<<endl;

//             food.clear();
//         }
//         if (!flag)
//         {
//             cout << stop << endl;
//         }
//     }
// }






#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main(){
ios_base::sync_with_stdio(false);
    int t = 1; 
    cin>>t;
    while(t--){
     
        
            
    }
    return 0;
}