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
         int n,p;
         cin>>n>>p;
         char s[n];
         string str="",ans="";
         if(p<=2){
            cout<<"impossible"<<endl;
            continue;
         }
         for(int i=0;i<=(p/2);i+=2){ 
            s[i]=s[p-i-1]='a';
            s[i+1]=s[p-i-2]='b';
         }
         for(int i=0;i< p;i++){
            str+= s[i];
         }
         for(int i=0;i< n/p;i++){
            ans+=str;
         }
         cout<<ans<<endl;
    }
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;
// typedef long long int ll;
// typedef pair<int,int> pll;
// typedef vector<int> vi;
// typedef vector<long long int> vll;

// string check(string s){
//     for(int i=0;i<(s.length()-1)/2;i++){
//          if(s[i]==s[s.length()-i-1]){
//             continue;
//          }
//          else{
//             return "No";
//          }    
//     }
//     return "Yes";
// }
// signed main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     int t = 1; 
//     cin>>t;
//     while(t--){
//          int n,p;
//          cin>>n>>p;
//          char s[n];
//          string str="",ans="";
//          if(p<=2){
//             cout<<"impossible"<<endl;
//             continue;
//          }
//          for(int i=0;i<=(p/2);i+=2){ 
//             s[i]=s[p-i-1]='a';
//             s[i+1]=s[p-i-2]='b';
//             //cout<<"test-->"<<i<<" "<<s[i]<<" "<<s[i+1] <<" "<<s[p-i-2]<<" "<<s[p-i-1];
//          }
//          for(int i=0;i< p;i++){
//             // cout<<i<<" "<<s[i];
//             str+= s[i];
//          }
//             cout<<str;
//          for(int i=0;i< n/p;i++){
//             ans+=str;
//          }
//          // cout<<check(str)<<endl;
//         //  cout<<str<<"-->"<<ans<<endl;
//         // cout<<ans<<endl;
//     }
//     return 0;
// }

