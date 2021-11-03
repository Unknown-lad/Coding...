#include<bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string reverseWords (string s)
    {
        //code here.
        string str="";
        char s2[s.size()];
        stack<char> st;

        for(int i=0;i<s.size();i++){
            st.push(s[i]);
        }

        for(int i=0;i<s.size();i++){
            s2[i]=st.top();
            str+=s2[i];
            st.pop();
        }

        stack<string> st2;
        string str2="";

        for(int i=0;i<str.size();i++){
            if(str[i]=='.'){
                st2.push(str2);
                str2="";
            }
            else{
                str2+=str[i];
            }
        }

        st2.push(str2);
        string str3;
        while(!st2.empty()){
            str2=st2.top();
            // cout<<str2<<;
            str3+=str2+'.';
            st2.pop();
        }

    if (!str3.empty()) {
        str3.erase(str3.size() - 1);
    }
        return str3;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}