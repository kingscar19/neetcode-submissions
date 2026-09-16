class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;

        for(int i=0; i<nums.size(); i++) {
            if(nums[i] % 2 != 0) {
                odd.push_back(nums[i]);
            }
            else {
                even.push_back(nums[i]);
            }
        }
        even.reserve(even.size() + odd.size());
        even.insert(even.end(), odd.begin(), odd.end());
        return even;
    }
};