class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int s = 0;
        int e = n - 1;

        while( s <= e) {
            int mid = s + (e - s) / 2;
            if(nums[mid] == target) {
                return true;
            }

            if (nums[s] == nums[mid] && nums[mid] == nums[e]) {
                s++;
                e--;
                continue;
            }

            if(nums[s] <= nums[mid]) {   // true when left sorted 
                if(nums[s] <= target && target <= nums[mid]) {   // target present in left
                    e = mid - 1;
                }
                else {       // target present in right
                    s = mid + 1; 
                }
            }
            else {       // true when right sorted
                if(nums[mid] <= target && target <= nums[e]) {         // target present in right
                    s = mid + 1;
                }
                else {
                    e = mid - 1;       // target present in left
                }
            }
        }
        return false;
    }
};
