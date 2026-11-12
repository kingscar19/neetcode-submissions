class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;

        for (int ast : asteroids) {
            bool destroyed = false;

            // Collision ONLY happens if the stack top moves right (> 0)
            // and the current asteroid moves left (< 0)
            while (!stk.empty() && stk.top() > 0 && ast < 0) {
                if (abs(stk.top()) < abs(ast)) {
                    // Top asteroid is smaller, so it explodes; keep checking next
                    stk.pop();
                    continue;
                } else if (abs(stk.top()) == abs(ast)) {
                    // Both have the same magnitude, so both explode
                    stk.pop();
                }
                // Current asteroid is either equal or smaller, so it gets destroyed
                destroyed = true;
                break;
            }

            if (!destroyed) {
                stk.push(ast);
            }
        }

        // Transfer remaining asteroids from stack to vector in correct order
        vector<int> ans(stk.size());
        for (int i = stk.size() - 1; i >= 0; i--) {
            ans[i] = stk.top();
            stk.pop();
        }

        return ans;
    }
};
