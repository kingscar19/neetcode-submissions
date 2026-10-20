class Solution {
public:
    int arrangeCoins(int n) {
        long low = 0, high = n;
        
        while (low <= high) {
            long mid = low + (high - low) / 2;
            long coins_used = mid * (mid + 1) / 2;
            
            if (coins_used == n) {
                return mid;
            } else if (coins_used < n) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        return high; // high will point to the maximum complete rows
    }
};
