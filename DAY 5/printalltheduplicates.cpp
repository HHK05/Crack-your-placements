#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
void printduplicates(stirng str){
	int n=str.size();
	sort(str.begin(),str.end());
	for(int i=0;i<n;i++){
		int count =1;
		while(i<len-1&&str[i]==str[i+1]){
			count++;
			i++;
		}
		if(count>1){
			cout<<str[i]<<",count="<<count<<endl;
		}
		
	}
}
int main(){
	string str = "testing string"
	printduplicates(str);
	return 0;
		
		