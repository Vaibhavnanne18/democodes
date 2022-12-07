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
        map<char,int> parent,child;
        string s1,s2;
        getline(cin,s1);
        getline(cin,s1);
        string s=s1+s2;
        //cout<<s1<<" "<<s2<<endl;
        for(int i=0;i<s.length();i++){
            parent[s[i]]++;
        }
        int n;
        cin>>n;
        string bachaa;
        for(int i=0;i<n;i++){
            string s;
           cin>>s;
           // cout<<s<<" ";
             bachaa+=s;
        }
                   //  cout<<bachaa<<endl;

         for(int i=0;i<bachaa.length();i++){
              child[bachaa[i]]++;
        }
        bool isvalid=true;
        for(char c='a';c<='z';c++){
            if(parent[c]<child[c]){
                 isvalid=false;
                 break;
            }
        }  
        if(isvalid){
            cout<<"YES"<<endl;
        }  
        else{
             cout<<"NO"<<endl;
        }
    }
    return 0;
}