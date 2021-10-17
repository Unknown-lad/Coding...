#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> leaders(int arr[], int n)
    {
        vector<int> v;
        
        int val = arr[n-1];
        v.push_back(val);
        
        for(int i=n-2;i>=0;i--){
            if(val<arr[i]){
                val=arr[i];
                v.push_back(val);
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
};

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        int a[n];

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution obj;
        vector<int> v = obj.leaders(a, n);

        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }

        cout << endl;
    }
}