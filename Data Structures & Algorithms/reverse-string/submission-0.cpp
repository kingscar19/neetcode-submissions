class Solution {
public:
    void reverseString(vector<char>& s) {
        int r = 0 ;
        int l = s.size() - 1;

        while (r <= l) {
            swap(s[r], s[l]);
            r++;
            l--;
        }
    }
};