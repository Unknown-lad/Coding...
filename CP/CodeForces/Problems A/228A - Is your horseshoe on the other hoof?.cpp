#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set<int> s;

    for(int i=0;i<4;i++){
        int val;
        cin>>val;
        s.insert(val);
    }

    if(s.size()==1){
        cout<<"3"<<endl;
    }
    else if(s.size()==2){
        cout<<"2"<<endl;
    }
    else if(s.size()==3){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
return 0;
}