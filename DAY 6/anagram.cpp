class solution{
public:
	vector<vector<string>>groupanagroup(vector<string>&strs){
		unordered_map<string,vector>>mp;
		for(auto word :strs){
			string temp=word;
			sort(temp.begin().tmep.end());
			mp[temp].push_back(word);
		}
		vector<vector<string>>ans;
		for(auto x:mp){
			ans.push_back(x.second);
		}
		return ans;
	}
};