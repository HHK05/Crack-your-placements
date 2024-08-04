class solution{
public:
	bool isnumber(string s){
		int n=s.length();
		if(n==0)return false;
		bool numseen=false;
		bool dotseen = false;
		bool eseen = false;
		bool numaftere = false;
		for(int i=0;i<n;i++){
			if(s[i]>='0' && s[i]<='9'){
				numseen=true;
				numaftere=true;
				
			}else if(s[i]=='.'){
				if(dotseen||eseen)return false;
				dotseen=true;
			}else if(s[i]=='e'||s[i]=='E'){
				if(eseen || numseen){
					return false;
				}
				eseen=true;
				numaftere=false;
			}else if (s[i]=='+' || s[i]=='-'){
				if(i!=0&&s[i-1]!='e' && s[i-1]!='E')return false;
			}else{
				return false;
			}
		}
		return numseen || numaftere;
	}
};