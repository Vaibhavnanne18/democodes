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
     int n;
     cin>>n;
     vi ans;
     for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ans.push_back(x);
     }
     ans.push_back(ans[0]);
     ll ones=0,xero=0;
     for(int i=0;i<n;i++){
        if(ans[i]==ans[i+1]){
            if(ans[i]==1){
                ones++;
            }
            if(ans[i]==0){
                xero++;
            }
        }
     }

     ll  a= min(ones,xero);
    if(a&1){
        cout<<"Alice"<<endl;
    }
    else{
        cout<<"Bob"<<endl;
    }
            
    }
    return 0;
}