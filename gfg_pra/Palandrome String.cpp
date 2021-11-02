#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int isPalindrome(string s)
	{
	    // Your code goes here
		string str="";
		for(auto i : s){
			str+=i;
		}
		reverse(str.begin(),str.end());

		if(s==str){return 1;}

		return 0;
	}
};

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}