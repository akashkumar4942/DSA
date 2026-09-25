class Solution {
public:
    set<string> merge(set<string> a, set<string> b) {
        set<string> result;

        for (string x : a) {
            for (string y : b) {
                result.insert(x + y);
            }
        }

        return result;
    }

    set<string> solve(string s, int &i) {
        set<string> result;
        set<string> current = {""};

        while (i < s.size() && s[i] != '}') {

            if (s[i] == ',') {
                // Union
                for (string x : current)
                    result.insert(x);

                current.clear();
                current.insert("");
                i++;
            }
            else if (s[i] == '{') {
                i++; // skip {

                set<string> inside = solve(s, i);

                i++; // skip }

                current = merge(current, inside);
            }
            else {
                // Normal character
                set<string> letter;
                letter.insert(string(1, s[i]));

                current = merge(current, letter);
                i++;
            }
        }

        // Add the last expression
        for (string x : current)
            result.insert(x);

        return result;
    }

    vector<string> braceExpansionII(string expression) {
        int i = 0;

        set<string> result = solve(expression, i);

        return vector<string>(result.begin(), result.end());
    }
};