class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = i+1;
        int count = 0;
        int n = nums.size();

        while(j <= n-count-1) {
            if(nums[i] != nums[j]) {
                i++;
                j++;
            } else {
                nums.erase(nums.begin() + j);
                count += 1;
            }
        }
        return (n - count);
    }
};