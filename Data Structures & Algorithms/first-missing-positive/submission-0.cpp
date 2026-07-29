class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        for(int i = 1; i <= 100000; i++) {
            if(find(nums.begin(), nums.end(),i) != nums.end()) {
                continue;
            }
            else{
                return i;
            }
        }
    }
};