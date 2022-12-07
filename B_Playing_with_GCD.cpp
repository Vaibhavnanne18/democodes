#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int, int> pll;
typedef vector<int> vi;
typedef vector<long long int> vll;




// #ifndef _GLIBCXX_NO_ASSERT
// #include <cassert>
// #endif
// #include <cctype>
// #include <cerrno>
// #include <cfloat>
// #include <ciso646>
// #include <climits>
// #include <clocale>
// #include <cmath>
// #include <csetjmp>
// #include <csignal>
// #include <cstdarg>
// #include <cstddef>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <ctime>
 
// #if __cplusplus >= 201103L
// #include <ccomplex>
// #include <cfenv>
// #include <cinttypes>
// #include <cstdbool>
// #include <cstdint>
// #include <ctgmath>
// #include <cwchar>
// #include <cwctype>
// #endif
 
// // C++
// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>
 
// #if __cplusplus >= 201103L
// #include <array>
// #include <atomic>
// #include <chrono>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
// #include <initializer_list>
// #include <mutex>
// #include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
// #include <tuple>
// #include <typeindex>
// #include <type_traits>
// #include <unordered_map>
// #include <unordered_set>
// #endif
 
// #define ll          long long
// #define pb          push_back
// #define mp          make_pair
// #define pii         pair<int,int>
// #define vi          vector<int>
// #define all(a)      (a).begin(),(a).end()
// #define F           first
// #define S           second
// #define sz(x)       (int)x.size()
// #define hell        1000000007
// #define endl        '\n'
// #define rep(i,a,b)  for(int i=a;i<b;i++)
// using namespace std;

// signed main(){
// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
//     int t = 1; 
//     cin>>t;
//     while(t--){
     
        
            
//     }
//     return 0;
// }






signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 2; i++)
        {
            int lcmi = (a[i] * a[i + 1]) / __gcd(a[i], a[i + 1]);
            int lcminext = (a[i+1] * a[i + 2]) / __gcd(a[i+1], a[i + 2]);
            int value=__gcd(lcmi,lcminext);
            if(value !=a[i+1]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}