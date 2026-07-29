class Solution {
public:
    int countSeniors(vector<string>& details) {
        int count = 0;
        for (string detail : details) {
            int ten = detail[11] - '0';
            int unit = detail[12] - '0';
            int age = (ten*10) + unit;
            if (age > 60) {
                count ++;
            }
        }
        return count;
    }
};