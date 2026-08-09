class Solution {
public:
    int scoreOfString(string s) {
        int n = s.length();
        int ans = 0;

        for(int i=0; i<n-1; i++) {
            char c1 = s[i];
            char c2 = s[i+1];
            int asciiValue1 = static_cast<int>(c1);
            int asciiValue2 = static_cast<int>(c2);
            ans = ans + abs(c2 - c1);
        }
        return ans;
    }
};