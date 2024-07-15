class solution {
public:
	void sortcolors(vector<int>&nums){
		int n=nums.size();
		int left=0,mid=0,high=n-1;
		while(mid<high){
			if(nums[mid]==0){
				swap(nums[left],nums[mid]);
				left++;
				mid++;
			else if(nums[mid]==1){
				mid++;
			else{
				swap(nums[mid],nums[right]);
				right--;
			}
		}		
	}
};