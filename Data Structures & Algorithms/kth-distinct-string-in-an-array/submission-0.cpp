class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        if(arr.size() < k) {return "";}

        unordered_map<string, int> Dist;

        for(const string& ch : arr ) {
            Dist[ch]++;
        }

        int count = 0;
        for(const string& p : arr) {
            if(Dist[p] == 1) {
                count++;
                if(count == k) {
                    return p;
                    }
            }
        }
        return "";
    }
};