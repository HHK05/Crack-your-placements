class solution{
public:
	int duplicate(vector<int>nums){
		int n=nums.size();
		int count=1;
		for(int i=1;i<n;i++){
			if(nums[i]!+nums[i-1]{
				nums[count++]=nums[i];
			}
		}
		return count;
	}
};