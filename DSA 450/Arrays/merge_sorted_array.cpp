#include <bits/stdc++.h>
using namespace std;

class Merge_array{
    public:

    void display(int a[],int n,int b[],int m){
        int k = n+m;
        int arr[k];
        int l=0,o=0;

        for(int i=0;i<n;i++){
            arr[i] = a[i];
        }
        for(int i=n;i<k;i++){
            arr[i] = b[l++];
        }
        sort(arr, arr+k);
        for(int i=0;i<n;i++){
            a[i]=arr[i];
        }
        for(int i=n;i<k;i++){
            b[o++]=arr[i];
        }
        cout<<"\n";
    }
};

int main(){
    
    int a[]={1, 3, 5, 7};
    int n = sizeof(a)/sizeof(a[0]);
    int b[]={0, 2, 6, 8, 9};
    int m = sizeof(b)/sizeof(b[0]);

    Merge_array obj;
    obj.display(a,n,b,m);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<m;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;

return 0;
}