#include <bits/stdc++.h>
using namespace std;

string reverseString(string str);

int main(){

    int t;
    cin>>t;
    
    while(t!=0){
        string s;
        cin>>s;

        cout<<reverseString(s)<<endl;
        t--;
    }
    
return 0;
}

string reverseString(string str){
    int n = str.length();
    
    string rev;
    for(int i=n-1;i>=0;i--)
        rev.push_back(str[i]);

        return rev;
}