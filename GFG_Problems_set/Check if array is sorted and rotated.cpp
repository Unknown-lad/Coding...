#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool checkRotatedAndSorted(int arr[], int num){
        
    }
};

int main()
 {
	int T;
	cin>> T;
	
	while (T--){
	    int num;
        cin>>num;
        int arr[num];
        
        for(int i = 0; i<num; ++i)
            cin>>arr[i];
        
        bool flag = false;
        Solution ob;
        
        flag = ob.checkRotatedAndSorted(arr, num);
        
        if(!flag){
            cout << "No"<<endl;
        }
        else
        cout << "Yes"<<endl;
    
	}
	
	return 0;
}