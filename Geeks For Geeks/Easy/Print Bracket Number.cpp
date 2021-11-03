vector<int> barcketNumbers(string s)
	{
	    // Your code goes here
		vector<int> v;
        stack<int> st;
        
		int k=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
			    st.push(k++);
				v.push_back(k);
			}
			
			int x;
    		switch(s[i]){
    		    case ')':
    		    x=st.top();
    		    st.pop();
    		    
    		    v.push_back(x+1);
    		}
		}
		
		
		return v;
	}