#include <bits/stdc++.h>
using namespace std;
#define ll long long

int result(int n){
    queue<int> q;

        for(int i=1;i<=n;i++){
            q.push(i);
        }

        int v1;
        while(q.size()>1){
            v1=q.front();
            q.pop();
            q.push(v1);
            q.pop();
        }
        return q.front();

        // int v1,v2,ans;
        // while(!q.empty()){
        //     v1=q.front();
        //     ans=v1;
        //     q.pop();
        //     v2=q.front();
        //     q.pop();

        //     q.push(v1);

        // }
        // return ans;
}

int main(){

    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        cout<<result(n)<<endl;
    }
    return 0;
}