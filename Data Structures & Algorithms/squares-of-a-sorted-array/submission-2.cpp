class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int l = 0;
        int r = n - 1;
        int p = n - 1;

        while(l <= r) {
            int left = nums[l]*nums[l];
            int right = nums[r]*nums[r];

            if(left > right) {
                result[p] = left;
                l++;
            }
            else {
                result[p] = right;
                r--;
            }
            p--;
        }
        return result;
    }
};