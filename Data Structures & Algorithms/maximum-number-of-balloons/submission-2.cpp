#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm> // For std::min

class Solution {
public:
    int maxNumberOfBalloons(std::string text) {
        vector<int> count(26, 0);

        for(char c : text) {
            count[c - 'a']++;   //If the character c is 'b', the math becomes: 'b' - 'a' \(\rightarrow \) 98 - 97 = 1.This subtraction acts as a converter, turning characters into safe array indexes from 0 to 25. 
                                //It is much faster than running a hash map lookup.
        }

        int b = count['b' - 'a'];
        int a = count['a' - 'a'];
        int l = count['l' - 'a'] / 2;
        int o = count['o' - 'a'] / 2;
        int n = count['n' - 'a'];

        return min({b, a, l, o, n});
    }
};
