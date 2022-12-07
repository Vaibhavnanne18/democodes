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
       string s;
       cin>>s;
       int count=0;
       for(int i=0;i<n;i++){
         for(int j=i+1;j<min(i+9,n);j++){
              // cout<<j<<" "<<j-i<<" "<<s[j]-s[i]<<"  ";
             if(abs(s[j]-s[i])==abs(j-i)){
                count++;
             }
         }
            // cout<<endl;
       }
       cout<<count<<endl;
            
    }
    return 0;
}