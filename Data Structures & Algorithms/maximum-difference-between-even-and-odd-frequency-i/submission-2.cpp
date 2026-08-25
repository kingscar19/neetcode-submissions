#include <climits>
class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char, int> map;

        for(char c : s) {
            map[c]++;
        }

        // char max_even_char = "\0";
        // char max_odd_char = "\0";
        int min_even_count = INT_MAX;
        int max_odd_count = INT_MIN;

        for(auto const& [character, count] : map) {
            if(count % 2 == 0) {
                if(count < min_even_count){
                    min_even_count = count;
                }
            }
            else {
                if(count > max_odd_count) {
                    max_odd_count = count;
                }
            }
        }
        if( min_even_count == INT_MAX || max_odd_count == INT_MIN) {
            return -1;
        }
        return max_odd_count - min_even_count;
    }
};