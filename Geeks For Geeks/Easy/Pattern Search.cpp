#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    bool search(string pat, string txt) 
    { 
        //sliding window technique
        // int sum=0,sum2=0,k=pat.size(),end=txt.size();

        // for(int i=0;i<k;i++){
        //     sum += (pat[i]-'0');
        //     sum2+=(txt[i]-'0');   
        // }

        // if(sum2==sum){
        //     return 1;
        // }
        
        // int win=sum2;
        // for(int i=k;i<end;i++){
        //     win += (txt[i]-'0')-(txt[i-k]-'0');
        //     if(win==sum){
        //         return 1;
        //         break;
        //     }
        // }
        // return 0;

        int s1=pat.size(),s2=txt.size();
        int j=0;

        for(int i=0;i<s2;i++){
            if(pat.at(j)==txt.at(i)){
                j=0;
            }
            else j++;

            if(j==s1)
                return 1;
        }
        return 0;
    }
};

int main() 
{
    int t;
    cin >> t;
    
    while(t--){
        string s, p;
        cin >> s >> p;
        Solution obj;
        if(obj.search(p, s)) cout << "Yes"; else cout << "No"; cout << endl;
    }

    return 0; 
}