class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxWater=0;

        for (int i=0; i<heights.size(); i++) {
            for (int j=i+1; j<heights.size(); j++) {
                int w=j - i;
                int ht=min(heights[i],heights[j]);
                int area=ht*w;

                maxWater = max(maxWater,area);
            }
        }

        return maxWater;


    }
};
