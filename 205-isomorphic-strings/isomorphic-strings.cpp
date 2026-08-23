class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        char mappingST[256]={};
        char mappingTS[256]={};
        for(int i=0;i<s.size();i++){
            if(mappingST[s[i]]!=0 && mappingST[s[i]]!=t[i]){
                return false;
            }if(mappingTS[t[i]]!=0 && mappingTS[t[i]]!=s[i]){
                return false;
            }
            mappingST[s[i]]=t[i];
            mappingTS[t[i]]=s[i];
        }
        return true;
 
    }
};