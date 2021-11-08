#include <bits/stdc++.h>
using namespace std;
#define ll long long

class Solution{
    
    
    public:
    vector<long long> findMissing(long long a[], long long b[],  
                 int n, int mm) 
    { 
        // Your code goes here
        unordered_map<ll,ll> m;
        vector<ll> v;

        for(ll i=0;i<mm;i++){
            m[b[i]]++;
        }

        for(ll i=0;i<n;i++){
            if(m.find(a[i])==m.end()){
                v.push_back(a[i]);
            }
        }

        return v;
    } 
};

int main() 
{
    
   
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int m;
        cin>>m;
        long long a[n];
        long long b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin >> b[i];
        vector<long long> ans;
        

        Solution ob;
        ans=ob.findMissing(a,b,n,m);
        for(int i=0;i<ans.size();i++)
        cout<<ans[i]<<" ";
        
        
        cout << "\n";
         
    }
    return 0;
} 