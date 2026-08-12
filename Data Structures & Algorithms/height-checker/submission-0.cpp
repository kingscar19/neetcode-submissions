class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        vector<int> expected_h = heights;

        sort(expected_h.begin(), expected_h.end());
        int count = 0;

        for(int i=0; i<n; i++) {
            if(expected_h[i] != heights[i]) {
                count ++;
            }
        }
        return count;
    }
};