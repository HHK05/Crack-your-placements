class solution{
	public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    if(n<=1)return -1;
    sort(a.begin(),a.end());
    long long mindiff=LLONG_MAX;
    for(long long i=0;i+m-1<n;i++){
        long long diff=a[i+m-1]-a[i];
        mindiff=min(mindiff,diff);
    }
    return mindiff;
    
    } 
};