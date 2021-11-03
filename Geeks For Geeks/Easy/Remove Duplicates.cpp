#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
		
	string removeDups(string s) 
	{
	   unordered_map<char,int> m;
       string str="";

       for(int i=0;s[i];i++){
           m[s[i]]++;
           auto it = m.find(s[i]);

           if(it->second==1)
           str.push_back(s[i]);
       }

       return str;
	}
};

int main()
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeDups(s) << "\n";
   		
   	}
    return 0;
}