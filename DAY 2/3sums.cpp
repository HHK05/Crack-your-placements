class solution{
public:
	vector<vector<int>>threesum(vector<int>&nums){
		int n=nums.size();
		sort(nums.begin(),nums.end());
		for(int i=0;i<n-2;i++{
			int j=i+1,k=n-1;
			while(j<k){
				if(nums[i]+nums[j]+nums[k]<0){
					j++;
				}else if(nums[i]+nums[j]+nums[k]>0){
					k--;
					
				}
				else{
					set.insert({nums[i\,nums[j],nums[k]});
					j++;
					k--;
				}
			}
		}
		for(auto it:set){
			res.push_back(it);
		}
		return res;
	}
};