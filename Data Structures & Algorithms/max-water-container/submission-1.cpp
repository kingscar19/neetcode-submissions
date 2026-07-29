class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;
        int lp=0,rp=heights.size()-1;

        while (lp < rp) {
            int w = rp - lp;
            int ht = min(heights[lp],heights[rp]);
            int currentWater = ht*w;

            maxWater = max(maxWater,currentWater);

            heights[lp] < heights[rp] ? lp++ : rp--;
        }

        return maxWater;


    }
};
