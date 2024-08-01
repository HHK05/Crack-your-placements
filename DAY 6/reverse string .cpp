class solution{
public:
	string reverseword(string s){
		stack<string>st;
		string word = " ";
		string result = " ";
		for(int i=0;i<s.size();i++){
			if(s[i]==' '){
				if(!word.empty()){
					st.push(word);
				}
			}else{
				word+=s[i];
			}
		}
		if(!word.empty()){
			st.push(word);
		}
		while(st.size()!=1){
			result+=st.top() + " ";
			st.pop();
		}
		return result;
	}
};
		