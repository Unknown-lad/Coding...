#include<bits/stdc++.h>
using namespace std;

class Solution{
public: 

    void matchPairs(char nuts[], char bolts[], int n) {
        // code here
        map <char,int> m;

        for(int i=0;i<n;i++){
            m[nuts[i]]++;
        }
        for(int i=0;i<n;i++){
            m[bolts[i]]++;
        }

        int j=0;
        for(auto val : m){
            nuts[j++]=val.first;
        }
        int k=0;
        for(auto val : m){
            bolts[k++]=val.first;
        }
    }

};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}