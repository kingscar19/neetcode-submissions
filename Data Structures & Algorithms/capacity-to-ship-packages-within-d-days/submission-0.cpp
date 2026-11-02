class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size(); 
        int l = *max_element(weights.begin(), weights.end());
        int r = accumulate(weights.begin(), weights.end(), 0);
        int res = r;

        auto capShip = [&](int cap){
            int ships = 1, currCap = cap;
            for(int i : weights) {
                if(currCap - i < 0) {
                    ships += 1;
                    currCap = cap;
                }
                currCap -= i;
            }
            return ships <= days;
        };

        while(l <= r) {
            int mid = l + (r - l) / 2;

            if(capShip(mid)) {
                res = mid;
                r = mid - 1;
            }
            else {
                l = mid + 1;
            }
        }
        return res;
    }
};