#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1; 
    cin>>t;
    while(t--){
     string s,p;
     cin>>s>>p;
     int high=s.length();
     map<char,int> m;
     for(char v:s){
        m[v]++;
     }
      for(char v:p){
        m[v]--;
     }
     string ans;
     for(auto v:m){
        while (v.second--)
            {
                ans += (v.first);
            }
        //repeat("sai", 3)
     }
     char start= p[0];
     int temp=0;
        for (int i = 0; i < high; i++)
        {
            if (ans[i] <= start && ans[i + 1] > start)
            {
                temp = i+1;
                break;
            }
        }
       // cout<<temp<<" ";
        int j=1;
        int i = temp;
        for (i; i >0; i--)
        {
            if (ans[i] == ans[i-1] && ans[i -1] > p[j])
            {
                temp--;
            }
        }
       //cout<<temp<<" ";
    //    string r = ans.substr(0, temp + 1);
    //     string r1 = ans.substr(temp + 1, high - temp);
    //     r = r + p + r1;
     ans.insert(temp,p);
     cout<<ans<<endl;

    }
    return 0;
}