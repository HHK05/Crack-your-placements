class solution{
public:
	string kthdistinctelement(vector<string>&arr,int k){
		int count =0;
		unordered_map<string,int>count;
		for(const auto&s:arr){
			count[s]++;
		}
		int distinctcount=0;
		for(const auto&s:arr){
			if(count[s]==1){
				distinctcount++;
				if(distinctcount==k){
					return s;
				}
			}
		}
		return "";
	}
};