class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int, int> map;

        for(int n : arr) {
            map[n]++;
        }

        int maxLucky = -1;

        for(const auto& c : map) {
            if(c.first == c.second) {
                maxLucky = max(maxLucky, c.first);
            }
        }
        return maxLucky;
    }
};