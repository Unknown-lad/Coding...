#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;

	while(t--){
		set<int, greater<int> > st;
            int a[4] ;
            for(int i=0;i<4;i++){
                int n ; cin>>n;
                a[i] = n;
                st.insert(n);
            }
            int len = st.size();
            if(len==4 || len==3){
               cout << 2 <<'\n';
            }
            else if(len==2){
                sort(a,a+4);
                if(a[0]==a[1]&&a[2]==a[3])cout << 2 <<'\n';
                else cout << 1 <<'\n';
            }
            else cout << 0 <<'\n';

        //OR in pairs
        // pair<int, int> PAIR1;
        // pair<int, int> PAIR2;

        // cin>>PAIR1.first;
        // cin>>PAIR1.second;

        // cin>>PAIR2.first;
        // cin>>PAIR2.second;

        // if(PAIR1.first == PAIR1.second && PAIR2.first == PAIR2.second){
        //  cout<<"0"<<endl;
        // }
        // else if((PAIR1.first!=PAIR1.second || PAIR1.second!=PAIR1.first) && (PAIR2.first!=PAIR2.second || PAIR2.second!=PAIR2.first)){
        //  cout<<"2"<<endl;
        // }
        // else
        //  cout<<"1"<<endl;
        // }
	}		
	return 0;
}