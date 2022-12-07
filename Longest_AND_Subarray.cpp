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
      float n;
      cin>>n;
      bool flag=true;
    int index1=log(n)/log(2);
      float index=(float)log(n)/log(2);
      if((int)index==index){
        index1--;
        flag=false;
      }
      int value=pow(2,index1);
      
      if(flag){
      cout<<n-value+1<<endl;   
      }
      else{
        cout<<n-value<<endl;
      }
    }
    return 0;
}