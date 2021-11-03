#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
  
    vector<string> winner(string arr[],int n)
    {
        vector<string> vec;
        map<string,int> m;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }

        int max=0;
        string winner;
        for(auto x : m){
            if(max<x.second){
                max=x.second;
                winner = x.first;
            }
        }
        vec.push_back(winner);
        string votes = to_string(max);
        vec.push_back(votes);


        return vec;
    }
};

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}