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
       int n,a,b;
       cin>>n>>a>>b;
       int bob=0,alice=0,common=0;
       vi v;
       for(int i=0;i<n;i++){
           int x;
           cin>>x;
           v.push_back(x);
           if(x%a==0){
              bob++;
           }
           if(x%b==0){
            alice++;
           }
           if(x%a==0 && x%b==0){
              common++;
           }
       }
      // cout<<alice<<" "<<bob<<" "<<common<<endl;
      if(common==0){
       if(alice>=bob){
           cout<<"ALICE"<<endl;
       }
       else{
        cout<<"BOB"<<endl;
       }
      }
      else{
        if(alice>bob){
           cout<<"ALICE"<<endl;
       }
       else{
        cout<<"BOB"<<endl;
       }
      }
    //    else if(alice==bob){
    //        if(common%2==0){
    //             cout<<"ALICE"<<endl;
    //        }
    //        else{
    //             cout<<"BOB"<<endl;
    //        }
    //    }
            
    }
    return 0;
}

