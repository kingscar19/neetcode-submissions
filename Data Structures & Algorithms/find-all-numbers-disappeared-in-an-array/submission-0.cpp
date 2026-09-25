class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> m; 

        // 1. Logic Fix: Count frequencies of numbers actually present in the input array
        for(int num : nums) {
            m[num]++;
        }

        // 2. Compilation Fix: Check keys from 1 to n. 
        // If a key doesn't exist in our map (count is 0), it is a disappeared number.
        for(int i = 1; i <= n; ++i) {
            if(m[i] == 0) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
