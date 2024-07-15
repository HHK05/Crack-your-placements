class solution {
	public:
	int duplicate(vector<int>&nums){
	int n=nums.size();
	sort(nums.begin(),nums.end());
	for(int i=1;i<n;i++){
		if(nums[i]==nums[i-1]){
			return nums[i];
		}
	}
};
/* following the constraint to be All the integers in nums 
appear only once except for precisely one integer which appears
two or more times*/
