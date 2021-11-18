//----------------------------------------------------------//
//                      Header-Files                        //
//----------------------------------------------------------// 
#include <iostream>
// #include <string>
#include <vector>
#include <algorithm>
// #include <climits>
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
// #define ll long long
// #define ld long double
// #define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
// #define min *min_element(all(a))
// #define max *max_element(all(a))
// const int MAX_N = 1e5 + 5;
// const ll MOD = 1e9 + 7;
// const ll INF = 1e9;
// const ld EPS = 1e-9;
// #define PI 3.1415926535897932384626
// int MIN=INT_MAX;
// typedef pair<int, int> pr;
typedef vector<int> vi;
// typedef vector<string> VS;
// typedef vector<pr> vpr;
// typedef vector<VI> vv;
// typedef map<int,int> mp;
// typedef unordered_map<int,int> ump;
// typedef set<int> st;
// typedef multiset<int> mst;
//----------------------------------------------------------//
//                    datatypes-STLS                        //
//----------------------------------------------------------//
 
 
//----------------------------------------------------------//
//                       Iterations                         //
//----------------------------------------------------------//
#define fo(i,j,n) for (int i = j; i < n; i++)
int j;
// #define re(i,n) for (int i = n; i>=0; i--)
// #define f(i,x) for(auto i : x)
// #define all(x) x.begin(), x.end()
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
    
   int n,d;
   cin>>n>>d;
 
   vi v;
   fo(i,j,n){
    int val;
    cin>>val;
    v.push_back(val);
   }
 
    int sum=0;
    fo(i,j,n){
        sum+=v[i];
    }
 
    int dif = (n-1)*10;
    if(sum+dif>d){
        cout<<"-1"<<endl;
    }
    else{
        cout<<(d-sum)/5<<endl;
    }
}
//----------------------------------------------------------//
//                    Solution-codes                        //
//----------------------------------------------------------// 
 
int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0); cout.tie(0);
 
    // int tc;
    // cin >> tc;
 
    // while(tc--){
        souvik_soulutions_loading();
    // }
}
