#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;

signed main()
{
    int t = 1;
    cin >> t;
    vector<pair<int, int>> point(t);
    set<pair<int, int>> points_set;
    int pmax = INT_MIN, pmin = INT_MAX;
    for (int i = 0; i < t; i++)
    {
        cin >> point[i].first >> point[i].second;
        points_set.insert(point[i]);
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = i + 1; j < t; j++)
            if (point[i].first != point[j].first && point[i].second != point[j].second)
            {
                auto point1 = point[i];
                auto point2 = point[j];
                if(point1.first>point2.first) swap(point1,point2);
				int x1=point1.first,y1=point2.second;
				int x2=point2.first,y2=point1.second;
                if (points_set.count({x1,y1}) && points_set.count({x2,y2}))
                {
                    int area = abs((point1.first - point2.first)) * abs((point1.second - point2.second));
                    pmin = min(pmin, area);
                    pmax = max(pmax, area);
                }
            }
    }
    if (pmin == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << pmax - pmin << endl;
    }
return 0;
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
//     vector<pair<int, int>> point(t);
//     vector<pair<pair<int, int>, pair<int, int>>> diagonals;
//     set<pair<int, int>> points_set;
//     // set<int> s;
//     int pmax = INT_MIN, pmin = INT_MAX;
//     for (int i = 0; i < t; i++)
//     {
//         cin >> point[i].first >> point[i].second;
//         points_set.insert(point[i]);
//     }
//     for (int i = 0; i < t; i++)
//     {
//         for (int j = i + 1; j < t; j++)
//             if (point[i].first != point[j].first && point[i].second != point[j].second)
//             {
//                 auto point1 = point[i];
//                 auto point2 = point[j];
//                 if (points_set.count(point1) && points_set.count(point1))
//                 {
//                     int area = abs((point1.first - point2.first)) * abs((point1.second - point2.second));
//                     pmin = min(pmin, area);
//                     pmax = max(pmax, area);
//                 }
//             }
//     }
//     if (pmin == INT_MAX)
//     {
//         cout << -1 << endl;
//     }
//     else
//     {
//         cout << pmax - pmin << endl;
//     }
//     // for (auto points : diagonals)
//     // {
//     //     auto point1 = points.first;
//     //     auto point2 = points.second;
//     //     pair<int, int> newp1 = {point1.first, point2.second};
//     //     pair<int, int> newp2 = {point2.first, point1.second};
//     //     //        int count=0;
//     //     //      for(int i=0;i<t;i++){
//     //     //          if(point[i]==newp1 || point[i]==newp2){
//     //     //             count++;
//     //     //          }
//     //     //      }
//     //     //      int area=abs((point1.first-point2.first)*(point1.second-point2.second));
//     //     //      if(count==2){
//     //     //         s.insert(area);
//     //     //      }
//     //     for (int i = 0; i < t; i++)
//     //     {
//     //         if (points_set.count(newp1) && points_set.count(newp2))
//     //         {
//     //             int area = abs((point1.first - point2.first) * (point1.second - point2.second));
//     //             pmin=min(pmin,area);
//     //             pmax=max(pmax,area);
//     //         }
//     //     }
//     // }
//     //   cout << *(s.rbegin()) - *(s.begin()) << endl;
//     return 0;
// }