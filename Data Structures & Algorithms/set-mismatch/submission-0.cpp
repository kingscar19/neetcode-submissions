class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
            int n = nums.size();
            vector<int> answer(2);
            unordered_map<int, int> Map;
            // sort(nums.begin(), nums.end());

            for(int a : nums) {
                Map[a]++;
            }

            for(int i=1; i<=n; i++) {
                if(Map[i] == 2) {
                    answer[0] = i; 
                }
                if(Map[i] == 0) {
                    answer[1] = i;
                }
            }
            return answer;
    }
};