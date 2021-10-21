#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string printMinIndexChar(string s, string p)
    {
        // Code here
       unordered_map<char,int> m1;
        string ans;

       for(int i=0;i<p.size();i++){
        m1[p[i]]++;
       }

       for(int i=0;i<s.size();i++){
        if(m1[s[i]]>=1){
            
            ans = s[i];
            return ans;
        }
       }
       return "$";
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
    return 0;
}