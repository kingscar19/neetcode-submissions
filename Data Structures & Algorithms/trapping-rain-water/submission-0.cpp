class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; // Handle empty edge case

        vector<int> leftMax(n);
        vector<int> rightMax(n);
        
        // Fix 1: Track and update the maximum from left to right
        int maxHeightl = 0;
        for(int i = 0; i < n; i++) {
            maxHeightl = max(height[i], maxHeightl);
            leftMax[i] = maxHeightl;
        }

        // Fix 2: Track and update the maximum from right to left (loop backward)
        int maxHeightr = 0;
        for(int i = n - 1; i >= 0; i--) {
            maxHeightr = max(height[i], maxHeightr);
            rightMax[i] = maxHeightr;
        }

        // Fix 3: Size the vector properly to avoid runtime crashes
        vector<int> amtWater(n);
        for(int i = 0; i < n; i++) {
            amtWater[i] = min(leftMax[i], rightMax[i]) - height[i];
        }

        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(amtWater[i] > 0) {
                ans = ans + amtWater[i];
            }
        }
        return ans;
    }
};
