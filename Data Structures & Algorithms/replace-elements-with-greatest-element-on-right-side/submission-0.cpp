class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max_e = -1;
        for (int i=arr.size()-1; i>=0; i--) {
            int temp = max_e;
            max_e = max(arr[i], max_e);
            arr[i] = temp;
        }
        return arr;
    }
};