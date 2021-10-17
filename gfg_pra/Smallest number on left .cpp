#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> leftSmaller(int n, int arr[]){
        // code here
        vector<int> v;
        stack<int> st;

        st.push(arr[0]);
        v.push_back(-1);
        
        for(int i=1;i<n;i++){
            while(!st.empty() and arr[i]<=st.top()){
                st.pop();
            }
            
            int res = st.empty() ? -1 : st.top();
            v.push_back(res);
            st.push(arr[i]);
        }

        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        vector<int> ans = ob.leftSmaller(n, a);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
} 