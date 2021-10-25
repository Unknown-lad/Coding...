#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<string> s(n);
        for(int i=0;i<n;i++)
            cin>>s[i];
        
        string tt;
        cin>>tt;
        
        vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
}

string paterning(string str){

    unordered_map<char,int> un;
    string res2=" ";

    for(int i=0;i<str.size();i++){
        un[str[i]]++;
        res2+=to_string(un[str[i]]);
    }

    return res2;
}

vector<string> findMatchedWords(vector<string> dict,string p)
{
    vector<string> vec;

    int len = p.size();

    string hash = paterning(p);

    for(auto word : dict){
        //the condition tells which are the string whtich match with pattern 
        if(word.length() == len and paterning(word)==hash){
            vec.push_back(word);
        }
    }
    return vec;
}