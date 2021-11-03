#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int maxSubstring(string s)
	{
        int c1=1,c0=1,dc0=0,cdiff=0,diff=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
               c1++;
            }
            else if(s[i]=='0'){
                c0++;
                dc0++;
            }
            if(c0>c1)
            {
                cdiff=c0-c1;
                if(cdiff>diff){
                    diff=cdiff;
                }
            }
            if(c1>c0){
               c1=0;
               c0=0;
            }
        }
        if(dc0==0)
        return -1;
        else
        return diff;
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

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}