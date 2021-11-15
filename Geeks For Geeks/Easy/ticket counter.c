#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n,k,end=1,start;
        cin>>n>>k;
        start=n;

        std::deque<int> v;

        for(int i=1;i<=n;i++){
            v.push_back(i);
        }

        while(v.size()>1){
            for(int i=1;i<=k and v.size()>1;i++){
                v.pop_front();
            }
            for(int i=1;i<=k and v.size()>1 ;i++){
                v.pop_back();
            }
        }

        cout<<v.front()<<endl;
        v.pop_front();
    }
}