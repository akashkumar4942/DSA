class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.size();i++){
            int reverseValue='z'-s[i]+1;
            ans+=(i+1)*reverseValue;
        }
        return ans;
        
    }
};