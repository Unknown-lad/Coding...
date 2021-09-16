#include <bits/stdc++.h>
using namespace std;

class Sort_ones_ {
    public:
    void ones_tows(int arr[],int n){
        int l=0,h=n-1,m=0;
        while(m<=n){
            switch(arr[m]){
                case 0:
                swap(arr[l++],arr[m++]);
                break;
                
                case 1:
                m++;
                break;
                
                case 2:
                swap(arr[m],arr[h--]);
                break;
            }
        }

    }
};

int main(){

    int arr[] = {2,0,2,1,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    Sort_ones_ obj;
    obj.ones_tows(arr, n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    
return 0;
}