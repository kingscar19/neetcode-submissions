class Solution {
public:
    int arrangeCoins(int n) {
        int l = 0;
        int h = n;

        while(l <= h) {
            long  mid = l + (h-l)/2;
            long coins_used = mid*(mid+1)/2;

            if(coins_used == n) {
                return mid;
            }
            else if(coins_used < n) {
                l = mid + 1;
            }
            else {
                h = mid - 1;
            }
        }
        return h;
    }
};