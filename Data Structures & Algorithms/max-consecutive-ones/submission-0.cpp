class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int m = 0;
        int c = 0;
        for (int count : nums) {
            if (count == 1) {
                c++;
                m = max(c,m);
            } else {
                c = 0;
            }
        }
        return m;
    }
};