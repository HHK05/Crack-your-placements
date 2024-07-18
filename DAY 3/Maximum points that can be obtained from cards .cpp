class solution{
public:
	int maximumpoints(vector<int>cardpoints,int k){
		int res=0;
		for(int i=0;i<k;i++){
			res+=cardpoints[i];
		}
		int current=res;
		for(int i=k-1;i>=0;i--){
			current -= cardpoints[i];
			current+=cardpoints(cardpoints[i].size()-k+i);
			res=max(res,current);
		}
		return res;
	}
};