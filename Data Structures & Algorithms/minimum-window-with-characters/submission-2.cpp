class Solution {
public:
    std::string minWindow(std::string s, std::string t) {
        if (t.empty()) return "";

        std::unordered_map<char, int> countT, window;
        for (char c : t) countT[c]++;

        int have = 0, need = countT.size();
        std::pair<int, int> res = {-1, -1};
        int resLen = INT_MAX;
        int l = 0;

        for (int r = 0; r < s.length(); ++r) {
            char c = s[r];
            window[c]++;

            if (countT.count(c) && window[c] == countT[c]) {
                have++;
            }

            while (have == need) {
                // Update our result
                if ((r - l + 1) < resLen) {
                    res = {l, r};
                    resLen = r - l + 1;
                }

                // Pop from the left of our window
                char leftChar = s[l];
                window[leftChar]--;
                if (countT.count(leftChar) && window[leftChar] < countT[leftChar]) {
                    have--;
                }
                l++;
            }
        }

        return (resLen == INT_MAX) ? "" : s.substr(res.first, resLen);
    }
};
