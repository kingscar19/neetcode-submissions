class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0; // Pointer for word
        int j = 0; // Pointer for abbr
        
        while (i < word.length() && j < abbr.length()) {
            if (word[i] == abbr[j]) {
                ++i;
                ++j;
                continue;
            }
            
            // If it's a leading zero or a non-digit character mismatch
            if (abbr[j] <= '0' || abbr[j] > '9') {
                return false;
            }
            
            // Parse the full numeric value for skipping characters
            int num = 0;
            while (j < abbr.length() && isdigit(abbr[j])) {
                num = num * 10 + (abbr[j] - '0');
                ++j;
            }
            i += num;
        }
        
        return i == word.length() && j == abbr.length();
    }
};