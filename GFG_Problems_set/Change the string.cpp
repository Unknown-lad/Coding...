//Remove Spaces
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    string modify (string s)
    {
      // your code here
      int first = (int)s[0];
      int val=0,len=s.length();

      char str[len];

      for(int i=0;i<s.length();i++){
        if(first>=65 && first<=90){
          if((int)s[i]>=97 && (int)s[i]<=122){
            val=(int)s[i]-32;
            str[i] = (char)val;
          }
          else{
            val=(int)s[i];
            str[i] = (char)val;
          }
        }
        else if(first>=97 && first<=122){
          if((int)s[i]>=65 && (int)s[i]<=90){
            val=(int)s[i]+32;
            str[i] = (char)val;
          }
          else{
            val=(int)s[i];
            str[i] = (char)val;
          }
        }
      }
      s="";
      for(int i=0;i<len;i++){
        s=s+str[i];
      }

    return s;
    }
};

int main(){

	int t;
	cin>>t;

	while(t--){
		string str1;
    cin>>str1;
    // cin>>str2;

    Solution obj;
    cout << obj.modify(str1) << endl;
	}
}