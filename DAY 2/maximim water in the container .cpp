class solution{
public:
	int maxarea(vector<int>&height){
		int n=height.size();
		int left=0,right=n-1,maxarea=0;
		while(left<=n){
			int width=left-right;
			maxarea=max(maxarea,min(height[left],height[right])*width);
			if(height[left]<=height[right]){
				left++;
			}else{
				right--;
			}
		}
		return maxarea;
	}
};