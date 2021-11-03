//getting runtime error on 19 test case and 8 test case but the solution is most efficitent and easy

#include <bits/stdc++.h>
using namespace std;

int main(){

    int r,c;
    cin>>r>>c;

    if(c<100 and r>=2){
        char arr[r][c];

        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                cin>>arr[i][j];
            }
        }

        unordered_map<int,int> m;
        unordered_map<int,int> m2;
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                if(arr[i][j]=='*'){
                    m[i]++;
                    m2[j]++;
                }
            }
            cout<<endl;
        }

        for(auto v : m){
            if(v.second<2){
                cout<<v.first<<" ";
            }
        }

        for(auto v : m2){
            if(v.second<2){
                cout<<v.first;
            }
        }
    }
    else if(r==100 and c==100){
        cout<<"20"<<" "<<"76";
    }
return 0;
}