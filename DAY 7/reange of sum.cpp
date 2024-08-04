class solution{
public:
	int rangesum(vector<int>&nums,int n,int left,int right){
		int mod = 1000000007;
		vector<int>res;
		for(int i=0;i<n;i++){
			int current_sum=0;
			for(int j=i;j<n;j++){
				(current_sum+=nums[j])%mod;
				res.push_back(current_sum);
			}
		}
		sort(res.begin(),res.end());
		long long sum=0;
		for(int i = left-1;i<right;i++){
			(sum+=res[i])%mod;
		}
	}
	return static_cast<int>(sum);
};
				
				