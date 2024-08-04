class solution{
public:
	int moves(vector<int>nums){
	int n=nums.size(),ans=0;
	sort(nums.begin(),nums.end());
	for(int i=0;i<n;i++){
		ans+=nums[i]-nums[j];
	}
	return ans;
};