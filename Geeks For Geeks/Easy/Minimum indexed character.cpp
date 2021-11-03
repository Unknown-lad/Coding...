#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int minIndexChar(string s, string p)
    {
        // Code here
        unordered_set<char> m;

        for(int i=0;i<p.length();i++){
            m.insert(p[i]);
        }
        //or unorederd_map <char,int> m;
        // for(auto x: t){
        //     m[p]++;
        // }

        for(int i=0;i<s.length();i++){
            if(m.find(s[i])!=m.end()){
                cout<<s[i]<<" ";
                return i;
            }
        }

        return -1;
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
        cout<<obj.minIndexChar(str, patt)<<endl;
    }
    
    return 0;
}