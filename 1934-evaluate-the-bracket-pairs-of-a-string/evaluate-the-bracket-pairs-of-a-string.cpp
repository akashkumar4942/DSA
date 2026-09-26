class Solution {
public:
    std::string evaluate(std::string s, std::vector<std::vector<std::string>>& knowledge) {
        std::unordered_map<std::string, std::string> lookup;
        for (const auto& pair : knowledge) {
            lookup[pair[0]] = pair[1];
        }
        
        std::string result;
        std::string current_key;
        bool in_key = false;
        
        for (char c : s) {
            if (c == '(') {
                in_key = true;
            } else if (c == ')') {
                in_key = false;
                auto it = lookup.find(current_key);
                if (it != lookup.end()) {
                    result += it->second;
                } else {
                    result += '?';
                }
                current_key.clear();
            } else if (in_key) {
                current_key += c;
            } else {
                result += c;
            }
        }
        
        return result;
    }
};