#include <bits/stdc++.h>
using namespace std;

class diff_{
    public:
    void show_diff(int arr[], int n,int k){
        sort(arr,arr+n);
        int ans = arr[n-1]-arr[0];

        int lrg = arr[n-1]-k;
        int sml = arr[0]+k;
        int mi,mx;

        for(int i=0;i<n-1;i++){
            //stl library which use to find minimum of the number
            mi = min(sml,arr[i+1]-k);
            //stl library which gives max value
            mx = max(lrg,arr[i]+k);
            if(mi<0)
            continue;
            //compare between current value and updated min value
            ans = min(ans,mx-mi);
        }
        cout<<ans<<endl;
    }
};

int main(){
    int arr[]={1, 5, 8, 10};
    int k = 2;
    int n = sizeof(arr)/sizeof(arr[0]);

    diff_ obj;
    obj.show_diff(arr, n,k);

return 0;
}