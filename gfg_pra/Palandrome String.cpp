#include <bits/stdc++.h>
using namespace std;

class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    // Your code goes here
        int len = s.length();
        bool t;

        int arr[len];
        if(len==1) return 1;
        else if(len<=3){
            for(int i=0;i<3;i++){
                if(s[i]!=s[i+1]){
                    t=false;
                }
            }
        }
        else{
                for(int i=0;i<len/2;i++){
                arr[i]=s[i];
            }
            
            for(int i=len/2+1;i<len;i++){
                if(arr[i]==s[i]){
                    t=true;
                }
            }

            if(t){
                return 1;
            }
        }
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