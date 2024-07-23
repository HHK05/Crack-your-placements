class solution{
public:
	bool isvalid(string s){
		stack<char>st;
		for(char c:s){
			if(c=="(" || c=="{" || c=="["){
				st.psuh(c);
			}
			else{
				if(st.empty()||
				c==")" && st.top()!="(" ||
				c=="}" && st.top()!="{" ||
				c=="]" && st.top()!="]"){
					return false;
				}
				st.pop();
			}
		}
		return st.empty();
	}
};
	