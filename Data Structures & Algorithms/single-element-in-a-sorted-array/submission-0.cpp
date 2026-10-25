class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int, int> map_count;

        for(int i = 0; i < nums.size(); i++) {
            map_count[nums[i]]++;
        }

        for(const auto& pair : map_count) {
            if(pair.second == 1) {
                return pair.first;
            }
        }
        return 0;
    }
};