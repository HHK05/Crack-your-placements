class solution{
public:
	int jump(vector<int>nums){
		int n=nums.size();
		int dest=0;
		for(int i=0;i<n;i++){
			if(dest<i){
				return false;
			}else{
				dest=max(dest,i+nums[i]);
			}
		}
		return true;
	}
};