class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int i=a.size()-1;
        int j=b.size()-1;
        int carry=0;
        while(i>=0||j>=0||carry>0){
            if(i>=0){
                carry+=a[i--]-'0';
            }
            if(j>=0){
                carry+=b[j--]-'0';
            }
            res+=carry%2+'0';
            carry/=2;
        }
        reverse(begin(res),end(res));
        return res;
        
    }
};