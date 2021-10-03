#include <bits/stdc++.h>
using namespace std;

int balancing(string s){

    unordered_map <char,int> um ={{'(',1},{'{',2},{'[',3},{')',-1},{'}',-2},{']',-3}};
    stack<char> st;

    for(char v: s){
        if(um[v]>0){
            st.push(v);
        }
        else{
            if(st.empty()) return 0;
            char top = st.top();
            st.pop();
            if(um[top]+um[v]!=0)
            return 0;
        }
    }

    if(st.empty())
    return 1;
    else
    return 0;
}

int main(){

    string s="[()]{}{[()()]()}";

    cout<<balancing(s)<<endl;

    return 0;
}