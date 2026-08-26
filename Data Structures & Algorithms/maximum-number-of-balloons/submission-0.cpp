#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm> // For std::min

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        std::unordered_map<char, int> counts;
        
        // Count the occurrences of all characters in the text
        for (char c : text) {
            counts[c]++;
        }
        
        // The instances we can make is limited by the minimum ratio available
        return std::min({
            counts['b'], 
            counts['a'], 
            counts['l'] / 2, // We need two 'l's per balloon
            counts['o'] / 2, // We need two 'o's per balloon
            counts['n']
        });
    }
};
