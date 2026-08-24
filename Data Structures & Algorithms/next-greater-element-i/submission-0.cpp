class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        result.reserve(nums1.size());

        for(int i=0; i<nums1.size(); i++) {
            int target = nums1[i];
            int next_grt = -1;
            int found_elm = -1;

            for(int j=0; j<nums2.size(); j++) {
                if(nums2[j] == target) {
                    found_elm = j;
                    break;
                }
            }

            for(int k= found_elm + 1; k<nums2.size(); k++) {
                if(nums2[k] > target) {
                    next_grt = nums2[k];
                    break;
                }
            }

            result.push_back(next_grt);
        }
        return result;
    }
};