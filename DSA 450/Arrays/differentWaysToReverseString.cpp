#include <bits/stdc++.h>
using namespace std;

void reverseStr(string s){
    int len = s.length();
    for(int i=len-1;i>=0;i--){
        cout<<s[i];
    }
}

int main(){
    //using inbuilt functions 
    
    string str="Hello world";
    cout<<str<<endl;

    reverse(str.begin(),str.end());
    cout<<str<<endl;

    reverseStr(str);
    cout<<endl;

return 0;
}