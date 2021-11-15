#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        priority_queue<int> p;

        int max=0;
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            p.push(val);
        }
        int j=0,sum=0;

        while(!p.empty()){
            if(max<p.top()){
                max=p.top();
            }
            p.push(max/2);
            sum+=p.top();
            p.pop();
            j++;
            if(j==k)
                break;
        }
        cout<<sum<<endl;
    }
}