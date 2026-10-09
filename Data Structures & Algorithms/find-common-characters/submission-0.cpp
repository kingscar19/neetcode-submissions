#include <vector>
#include <string>
#include <algorithm>
#include <climits>

class Solution {
public:
    std::vector<std::string> commonChars(std::vector<std::string>& words) {
        // Array to store the minimum frequency of each character across all words
        std::vector<int> minFreq(26, INT_MAX);
        
        for (const std::string& word : words) {
            std::vector<int> charFreq(26, 0);
            for (char c : word) {
                charFreq[c - 'a']++;
            }
            // Update the global minimum frequency for each character
            for (int i = 0; i < 26; ++i) {
                minFreq[i] = std::min(minFreq[i], charFreq[i]);
            }
        }
        
        std::vector<string> result;
        // Build the result list based on the minimum frequencies
        for (int i = 0; i < 26; ++i) {
            while (minFreq[i] > 0) {
                result.push_back(std::string(1, i + 'a'));
                minFreq[i]--;
            }
        }
        
        return result;
    }
};
