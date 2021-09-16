#include <bits/stdc++.h>
using namespace std;

class Sum_of_subarray{
    public:

    void subarray_sum(int arr[], int n){
       int c_sum=0;
       int m_sum=0;

       for(int i=0;i<n;i++){
           //Kandane's algorithim:-
           //compare the sum of current_sum to max_sum of array if current sum if greater put it in max_sum
           //if the current sum gives negetive value then set it to 0
           //this algorithim looks all the positive integers and if a negetive integer comes and the sum of them is
           //in negetive then it creates problem and further travering if there are values which are greater then
           //this sum then it will be the greater sum that that old sum will set to be 0
           
           c_sum=c_sum+arr[i];

           if(c_sum>m_sum){
               m_sum = c_sum;
           }
           if(c_sum<0){
               c_sum=0;
           }
       }
       cout<<m_sum<<endl;
    }
};

int main(){
    
    int arr[]={1,-2,3,-2,-5};
    int n = sizeof(arr)/sizeof(arr[0]),i;

    Sum_of_subarray obj;
    obj.subarray_sum(arr, n);

    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
return 0;
}