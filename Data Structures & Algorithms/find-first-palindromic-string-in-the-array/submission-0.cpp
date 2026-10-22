class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(string s : words) {
            int l = 0;
            int r = s.length()-1;

            while(l <= r && s[l] == s[r]) {
                l++;
                r--;
            }

            if(l > r) {
                return s;
            }
        }
        return "";
    }
};
