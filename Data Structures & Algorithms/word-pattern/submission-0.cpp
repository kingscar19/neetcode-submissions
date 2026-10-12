class Solution {
public:
    bool wordPattern(string pattern, string s) {
        std::istringstream iss(s);
        vector<string> words;
        string word;

        while(iss >> word) {
            words.push_back(word);
        }

        if(words.size() != pattern.length()) {
            return false;
        }

        int n = pattern.length();
        for(int i=0; i<n; ++i) {
            for(int j=i+1; j<n; ++j) {
                if(pattern[i] == pattern[j] && words[i] != words[j]) {
                    return false;
                }

                if(pattern[i] != pattern[j] && words[i] == words[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};