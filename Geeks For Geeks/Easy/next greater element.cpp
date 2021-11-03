#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        vector<long long> v;
        stack<long long> st;

        st.push(arr[n-1]);

        for(long long i=n-2;i>=0;i--){

            while(!st.empty() and st.top()<=arr[i]){
                st.pop();
            }

            long long res=0;
            if(!st.empty()){
                res=st.top();
            }else{
                res=-1;
            }
            v.push_back(res);
            st.push(arr[i]);
        }

        reverse(v.begin(),v.end());
        v.push_back(-1)

        return v;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
    return 0;
}  