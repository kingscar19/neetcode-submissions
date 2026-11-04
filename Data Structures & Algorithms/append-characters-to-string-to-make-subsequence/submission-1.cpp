class Solution {
public:
    int appendCharacters(string s, string t) {
        int n = t.length();
        int i = 0;
        int j = 0;

        while(i < t.length() && j < s.length()) {    // Add j bound check here
            if(t[i] == s[j]) {
                i++;
                j++;
            }
            else {
                j++;
            }
        }
        if(i < t.length()) {
                return n - i;
            }
        return 0;
    }
};