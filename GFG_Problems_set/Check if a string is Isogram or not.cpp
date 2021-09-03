//Remove Spaces
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
    bool isIsogram(string s)
    {
      //Your code here
      unordered_map<char,int> m;

      for(int i=0;i<s.length();i++){
        string str;
        str[i]=s[i];
        m[str[i]]++;
      }

      for(auto val : m){
        if(val.second>1){
          return false;
        }
      }
      return true;
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
    cout << obj.isIsogram(str1) << endl;
	}
}