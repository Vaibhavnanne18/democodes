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
        cin >>n;
        map<int,int> m;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            m[x]++;
        }
        int count=0;
        for(auto v:m){
            //cout<<v.first<<" "<<v.second<<endl;
            if(v.second==1){
                count++;
            }
            else if(v.second==2){
                count+=2;
            }
        }
        //cout<<count<<endl;
        if(count%2 ==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}