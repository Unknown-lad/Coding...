#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findMaxLen(string s) {
        // code here
        // int l=0,r=0,len=0;
        // for(int i=0;i<s.length();i++){
        //     if(s[i]=='(')
        //         ++l;
        //     else
        //         ++r;
        //     if(l==r)
        //         len = max(len,2*r);
        //     else if(r>l)
        //         r=l=0;
        // }
    
        // for(int i=s.length()-1;i>=0;i--){
        //     if(s[i]=='(')
        //         ++l;
        //     else
        //         ++r;
        //     if(l==r)
        //         len = max(len,2*r);
        //     else if(l>r)
        //         r=l=0;
        // }
    
        // return len;
        stack<int> st;
        int j=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }

            int x;
            switch(s[i]){
                case ')':
                st.top();
                st.pop();
                j++;
            }
        }
        int res=j*2;
        
        return res;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S; 
        Solution ob;
        cout << ob.findMaxLen(S) << endl;
    }
    return 0;
}