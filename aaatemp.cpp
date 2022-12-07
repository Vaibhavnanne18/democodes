#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;


DFS(int v)
{
    // Mark the current node as visited and
    // print it
    visited[v] = true;
    cout << v << " ";
 
    // Recur for all the vertices adjacent
    // to this vertex
    list<int>::iterator i;
    for (i = adj[v].begin(); i != adj[v].end(); ++i)
        if (!visited[*i])
            DFS(*i);
}


signed main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t = 1; 
    cin>>t;
    while(t--){
     
        
            
    }
    return 0;
}