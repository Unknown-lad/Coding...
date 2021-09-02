#include <bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin>>t;

	while(t--){
		int n,m,tot=0,tot2=0;
		cin>>n>>m;

		vector<int> v;
		vector<int> v2;

		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}

		for(int j=0;j<m;j++){
			int y;
			cin>>y;
			v2.push_back(y);
		}


		vector <int> scores(n+m);

		sort(v.begin(),v.end());
		sort(v2.begin(),v2.end());

		merge(v.begin(),v.end(),v2.begin(),v2.end(),scores.begin());

		size_t size = scores.size();

		if (size == 0)
		  {
		    cout<<"0";  // Undefined, really.
		  }
		  else
		  {
		    sort(scores.begin(), scores.end());
		    if (size % 2 == 0)
		    {
		      cout<<(double)(scores[size / 2 - 1] + scores[size / 2]) / 2;
		    }
		    else 
		    {
		      cout<<scores[size / 2];
		    }
		  }

		// for(auto &value : v3){
		// 	tot+=value;
		// }

		// cout<<(double)tot/(double)v3.size();

		// cout<<c<<endl;
	}
	return 0;
}