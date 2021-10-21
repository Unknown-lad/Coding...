#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int countOccurence(int arr[], int n, int k) {
        // Your code here
        unordered_map<int,int> m;

        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }

        int count=0;
        for(auto val : m){
            if(val.second>n/k){
                count++;
            }
        }
        
        return count;
    }
};

int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}
