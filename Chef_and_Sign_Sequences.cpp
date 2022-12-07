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
     
        string s;
        cin>>s;
        int count=1,uncount=1;
        int ans=-1,unans=-1;
        for(char v:s){
            if(v=='>'){
                uncount++;
                ans=max(ans,count);
                count=1;
            }
            else if(v=='='){
                continue;
            }
            else{
                count++;
                unans=max(unans,uncount);
                uncount=1;
            }
        }
        ans=max(ans,count);
        unans=max(unans,uncount);
        // if(ans==-1){
        //     cout<<count<<endl;
        // }
        // else
        cout<<max(ans,unans)<<endl;
            
    }
    return 0;
}