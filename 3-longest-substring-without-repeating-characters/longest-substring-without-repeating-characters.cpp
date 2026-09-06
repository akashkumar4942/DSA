class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int left=0;
        int right=0;
        int maxsum=0;
        while(right<s.size()){
            if(st.find(s[right])==st.end()){
                st.insert(s[right]);
                 maxsum = max(maxsum, right - left + 1);

                right++;
            }
            else{
                st.erase(s[left]);
                left++;
            }
        }
        return maxsum;
        
 



        
    }
};