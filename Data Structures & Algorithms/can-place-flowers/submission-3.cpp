class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size();

        for(int i=0; i<s; i++) {
            if(flowerbed[i] == 0) {
                bool leftcheck = ( i == 0 || flowerbed[i - 1] == 0);
                bool rightcheck = ( i == s - 1 || flowerbed[i + 1] == 0);

                if(leftcheck && rightcheck) {
                    flowerbed[i] = 1;
                    n--;

                    if(n <= 0)return true;
                }
            }
        }
        return n <= 0;
    }
};