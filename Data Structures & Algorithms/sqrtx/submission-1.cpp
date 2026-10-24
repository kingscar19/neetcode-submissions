class Solution {
public:
    int mySqrt(int x) {
        int l = 0;
        int r = x;

        while(l <= r) {
            int mid = l + (r - l) / 2;
            long long sqr = (long long)mid * mid;

            if(sqr == x) {
                return mid;
            }
            else if(sqr > x) {
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return r;
    }
};