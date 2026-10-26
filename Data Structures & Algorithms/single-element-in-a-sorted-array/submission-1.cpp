class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // Ensure mid is even for easy comparison with the next element
            if (mid % 2 == 1) {
                mid--;
            }
            
            // If the pair is intact, the single element is further to the right
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2;
            } 
            // If the pair is broken, the single element is at mid or to the left
            else {
                right = mid;
            }
        }
        
        // 'left' and 'right' will converge on the single element
        return nums[left];
    }
};
