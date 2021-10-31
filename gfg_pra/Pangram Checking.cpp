#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    bool checkPangram (string &s) {
        // your code here

        set<char> st;

        for(int i=0;i<s.length();i++){
            if(s[i]>='A' and s[i]<='z'){
                st.insert(s[i]);
            }
        }

        if(st.size()==26){
            return true;
        }

        return false;
    }

};

int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string str;
        getline(cin, str);
        Solution obj;
        if (obj.checkPangram(str) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}