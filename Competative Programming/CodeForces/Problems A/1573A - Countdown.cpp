#include <iostream>
#include <string>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){

  int nt;
  string s;

  cin>>nt;
  cin>>s;

  long long c=0;
  for(int i=0;i!=nt-1;i++){
    c+=(s[i]-'0');
    if(s[i]!='0'){
      c++;
    }
  }
  
  long long nth = (s[s.length()-1]-'0');

  cout<<(c+nth)<<endl;

}
return 0;
}