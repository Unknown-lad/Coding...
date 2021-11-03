#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int majorityElement(string a[], int n)
    {
        // your code here
        unordered_map<string, int> m;

        for(int i=0;i<n;i++){
          m[a[i]]++;
        }

        int res = 0;
        int count=0;
        for(auto val : m){
          if(val.second==2){
            count++;
          }
        }

        return count;
    }
};

int main(){

  int t;
  cin>>t;

  while(t--){
    int n;
        cin >> n;
        string a[n];
        
        for(int i = 0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;
        cout << obj.majorityElement(a, n) << endl;
  }
}