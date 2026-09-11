class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();

    // Maps to store: Key = Index, Value = Sum
    std::map<int, int> left_sum_map;
    std::map<int, int> right_sum_map;

    // 1. Populate Left Sum Map (Elements to the left of index i)
    int current_left_sum = 0;
    for (int i = 0; i < n; ++i) {
        left_sum_map[i] = current_left_sum;
        current_left_sum += nums[i]; 
    }

    // 2. Populate Right Sum Map (Elements to the right of index i)
    int current_right_sum = 0;
    for (int i = n - 1; i >= 0; --i) {
        right_sum_map[i] = current_right_sum;
        current_right_sum += nums[i];
    }

    for (const auto& [index, left_sum] : left_sum_map) {
    // Check if the same index exists in right_sum_map
        auto it = right_sum_map.find(index);
        
        // If index exists and the values match
        if (it != right_sum_map.end() && it->second == left_sum) {
            return index;
        }
    }
    return -1;
    }
}; 