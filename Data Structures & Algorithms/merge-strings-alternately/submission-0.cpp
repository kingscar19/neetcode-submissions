class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string sum = "";
        int f = 0;
        int s = 0;

        while(word1.length() > f && word2.length() > s) {
            sum += word1[f];
            sum += word2[s];
            f++;
            s++;
        }

        while(word1.length() > f) {
            sum += word1[f];
            f++;
        }

        while(word2.length() > s) {
            sum += word2[s];
            s++;
        }

        return sum;
    }
};