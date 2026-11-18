class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();

        vector<pair<int,int>> pair(n);

        for(int i=0; i<n; ++i) {
            pair[i] = {position[i], speed[i]};
        }

        sort(pair.begin(),pair.end());

        vector<double> stack;

        for(int i=n-1; i>=0; --i) {
            double time = (double) (target - pair[i].first) / pair[i].second;
            stack.push_back(time);

            int a = stack.size();
            if(a >= 2 && stack.back() <= stack[a - 2]) {
                stack.pop_back();
            }
        }
        return stack.size();
    }
};
