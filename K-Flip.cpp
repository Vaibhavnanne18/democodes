#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;

ll N,K;

string ulta(string &s){
    int count=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]=='1'){
            count=i;
            break;
        }
    }
    //cout<<count<<" "<<endl;
    for(int i=count;i<K+count;i++){
        if( s[i]=='1'){
             s[i]='0';
        }
        else{
             s[i]='1';
        }
         //cout<<i<<" "<<s[i]<<endl;
    }
     //cout<<count<<" "<<s<<" \n";
    return s;
}

signed main(){
    int t = 1; 
    cin>>t;
    while(t--){
       cin>>N>>K;
       string s;
       cin>>s;
       int length=N-K+1;
      // cout<<length<<endl;
       string ans=s;
       for(int i=0;i<length;i++){
           ans=ulta(ans); 
       }
       cout<<ans<<endl;
    }
}