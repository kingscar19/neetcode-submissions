#include <vector>
#include <algorithm>
#include <cmath>

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long totalHours = 0;

            for (int p : piles) {
                // Ceiling division: (p + mid - 1) / mid
                totalHours += (p + mid - 1) / mid;
            }

            if (totalHours <= h) {
                ans = mid;           // Can finish in time, try a slower speed
                right = mid - 1;
            } else {
                left = mid + 1;      // Too slow, need a faster speed
            }
        }

        return ans;
    }
};
