class Solution {
public:
    void sortColors(vector<int>& nums) {
      vector<int> red;
      vector<int> white;
      vector<int> blue;

      for (auto x : nums) {
        if (x == 0) {
            red.push_back(x);
        } else if (x == 1) {
            white.push_back(x);
        } else {
            blue.push_back(x);
        }
      }
      nums.clear();
      nums.insert(nums.end(), red.begin(), red.end());
      nums.insert(nums.end(), white.begin(), white.end());
      nums.insert(nums.end(), blue.begin(), blue.end());
    }
};