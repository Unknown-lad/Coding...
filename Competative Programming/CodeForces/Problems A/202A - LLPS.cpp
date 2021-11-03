#include <bits/stdc++.h>
using namespace std;

int main(){

  string str;
  cin>>str;

  map<char,int> s;

  for(int i=0;i<str.length();i++){
    s[str[i]]++;
  }

  int max=0,sum=0;
  char ch;
  for(auto v = s.rbegin(); v != s.rend(); ++v){
    int n = (int)v->first;
    if(max<v->second and sum<n){
        max=v->second;
        ch=v->first;
        sum=n;
    }
  }
  string str2=" ";
  for(int i=0;i<max;i++){
    str2+=ch;
  }
  cout<<str2<<endl;
return 0;
}