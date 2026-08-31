class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        int maxLength = 1;
        int inc = 1; // Tracks current strictly increasing length
        int dec = 1; // Tracks current strictly decreasing length
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if (nums[i] > nums[i - 1]) {
                inc += 1;
                dec = 1; // Reset decreasing tracker
            } else if (nums[i] < nums[i - 1]) {
                dec += 1;
                inc = 1; // Reset increasing tracker
            } else {
                // If elements are equal, reset both trackers
                inc = 1;
                dec = 1;
            }
            
            maxLength = std::max({maxLength, inc, dec});
        }
        return maxLength;
    }
};