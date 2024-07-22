class solution{
public:
	int majority(vector<int>nums){
		int n=nums.size();
		int target=nums[0].size(),count=1;
		for(int i=0;i<n;i++){
			if(nums[i]==target){
				count++;
			}else{
				count--;
				if(count==0){
					nums[i]=target;
				}
			}
		}
		return target;
	}
};
		