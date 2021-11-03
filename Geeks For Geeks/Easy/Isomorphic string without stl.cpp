#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string s,ss;
    cin>>s>>ss;

    bool t;

    int a[256]={0};
        int b[256]={0};
        // Your code here
        if(s.length()!=ss.length()){
            t= false;
        }
        for(int i=0;i<s.size();i++){
            a[s[i]]++;
            b[ss[i]]++;
            if(a[s[i]]!=b[ss[i]]){
                t= false;
            }
        }
        // return true;

    if(t)
        cout<<"1";
    else if(!t)
        cout<<"0";
    return 0;
}