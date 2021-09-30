#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    bool checkRotatedAndSorted(int arr[], int n){
        int max=0,min=32767,pos=0;
        for(int i=0;i<n;i++){
            if(arr[i]>max){
                max=arr[i];
                pos=i;
            }
            if(arr[i]<min){
                min=arr[i];
            }
        }
        

        if(arr[pos]==max && arr[pos+1]==min){
            return 1;
        }
        else if(arr[pos-1]==min && arr[pos]==max){
            return 1;
        }
        return 0;
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