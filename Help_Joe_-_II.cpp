#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main()
{
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i]%=m;
    }

    sort(a.begin(),a.end());
    int q;
    cin >> q;
    while (q--)
    {
        long long int x;
        cin >> x;
        int second = x % m;
        int first = -1;
        int value1=m-1-second;
        auto itr1=upper_bound(a.begin(),a.end(),value1);
        // int value2=2*m-2-second;       
        // auto itr2=upper_bound(a.begin(),a.end(),value2);
        if(itr1!=a.begin()){
        itr1--;
        }
        //cout<<value1<<" "<<*itr1<<" "<<value2<<" "<<*itr2<<endl;
    //   for( itr1;itr1>a.begin();itr1--){
          
    //   }
        // for (int i = 0; i < n; i++)
        // {
            // if ((*itr1+second) % m > (*itr2+second) % m)
            // {
            //     first = (*itr1+second) % m;
            // }
            // else{
            //     first=(*itr2+second) % m;
            // }
        // }
        
        cout<<max(((*itr1+second) % m),(a[n-1]+second) % m)<< endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int,int> pll;
// typedef vector<int> vi;
// typedef vector<long long int> vll;

// signed main(){
//     int n,m,q; 
//     cin>>n>>m;
//     long long int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     cin>>q;
//     while(q--){
//         int x;
//         cin>>x;
//         int second=x%m;
//         int first=-1;
//         for(int i=0;i<n;i++){
//             if((a[i]%m + second)%m  >first){
//                 first=(a[i]%m + second)%m;
//             }
//         }
//         cout<<first<<endl;
//     }

// }