//----------------------------------------------------------//
//                      Header-Files                        //
//----------------------------------------------------------// 
#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>
// #include <sstream>
// #include <queue>
// #include <deque>
// #include <bitset>
// #include <iterator>
// #include <list>
// #include <stack>
// #include <map>
// #include <unordered_map>
// #include <set>
// #include <unordered_set>
// #include <functional>
// #include <numeric>
// #include <utility>
// #include <limits>
// #include <time.h>
// #include <math.h>
// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <assert.h>
using namespace std;
//----------------------------------------------------------//
//                      Header-Files                        //
//----------------------------------------------------------// 
 
 
//----------------------------------------------------------//
//                    datatypes-STLS                        //
//----------------------------------------------------------// 
// #define ar array
#define ll long long
// #define ld long double
// #define sza(x) ((int)x.size())
// #define all(a) (a).begin(), (a).end()
// #define min *min_element(all(a))
// #define max *max_element(all(a))
// const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;
// #define PI 3.1415926535897932384626
// int min=INT_MAX;
typedef pair<int, int> pr;
typedef vector<int> vi;
// typedef vector<string> VS;
typedef vector<pr> vpr;
// typedef vector<VI> VVI;
// typedef map<int,int> MPII;
// typedef unordered_map<int,int> UMPII;
// typedef set<int> SETI;
// typedef multiset<int> MSETI;
//----------------------------------------------------------//
//                    datatypes-STLS                        //
//----------------------------------------------------------//
 
 
//----------------------------------------------------------//
//                       Iterations                         //
//----------------------------------------------------------//
#define fo(i, n) for (int i = 1; i <= n; i++)
#define f(i,x) for(auto i : x)
#define all(x) x.begin(), x.end()
// #define sortall(x) sort(all(x))
// #define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
// #define PRESENT(c,x) ((c).find(x) != (c).end()) 
//----------------------------------------------------------//
//                       Iterations                         //
//----------------------------------------------------------//
 
 
//----------------------------------------------------------//
//                    Solution-codes                        //
//----------------------------------------------------------// 
void souvik_soulutions_loading() {
    
    int n;
    cin>>n;
 
    vpr v;
    fo(i,n){
        ll val;
        cin>>val;
        v.push_back(make_pair(val,i));
    }
    
    sort(all(v));
    int max=0;
    f(i,v){
        // cout<<i.first<<i.second<<" ";
        int dif=i.first-i.second;
        if(dif>max){
            max=dif;
        }
    }
 
    cout<<max<<"\n";
}
//----------------------------------------------------------//
//                    Solution-codes                        //
//----------------------------------------------------------// 
 
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
 
    int tc;
    cin >> tc;
 
    while(tc--){
        souvik_soulutions_loading();
    }
}

