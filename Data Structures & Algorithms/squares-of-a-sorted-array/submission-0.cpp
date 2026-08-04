class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        int i = 0;

        while(i < n) {
            int x = nums[i]*nums[i];
            ans.push_back(x);
            i++;
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};