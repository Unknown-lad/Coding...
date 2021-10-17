//Remove Spaces
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
    string removeChars(string s1, string s2) {
        // code here

      int i=0;
      if(s1.length()>s2.length() || s1.length()==s2.length() || s1.length()<s2.length()){
        while(i!=s2.length()){
          s1.erase(remove(s1.begin(), s1.end(), s2[i]), s1.end()); 
          i++;
        }
      }
      return s1;
    }
};

int main(){

    int t;
    cin>>t;

    while(t--){
        string str1,str2;
    cin>>str1;
    cin>>str2;

    Solution obj;
    cout << obj.removeChars(str1,str2) << endl;
    }
}