#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    string decodedString(string s){
        // code here

        stack<int> st;
        string str="";
        for(auto i:s){
            
            if(i=='['){
                str="";
            }
            else{
                str+=s[i];
            }
        }

        cout<<str<<endl;

        return s;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}