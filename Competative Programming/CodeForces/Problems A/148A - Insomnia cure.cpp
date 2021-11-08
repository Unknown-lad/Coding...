#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    unordered_set<int> st;

    int c=0,cc=0,c3=0,c4=0;
    for(int i=1;i<=d;i++){
        if(i%k==0){
            st.insert(i);
        }
        if(i%l==0){
            st.insert(i);
        }
        if(i%m==0){
            st.insert(i);
        }
        if(i%n==0){
            st.insert(i);
        }
    }
    
    int res = d-st.size();
    cout<<d-res<<endl;
    return 0;
}