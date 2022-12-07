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
       int n,x;
       cin>>n>>x;
       //cout<<(n/x)%2<<endl;
       if((n%x)==0 && (n/x)%2==0){
           cout<<"YES"<<endl;
       }
       else{
           cout<<"NO"<<endl;
       }
        
            
    }
    return 0;
}