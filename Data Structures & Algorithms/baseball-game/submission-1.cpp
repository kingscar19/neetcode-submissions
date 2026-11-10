class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans = 0;

        for(string ch : operations) {
            if(ch == "+") {
                int x1 = st.top();
                st.pop();
                int x2 = st.top();
                int x3 = x1 + x2;
                st.push(x1);
                st.push(x3);
            }
            else if(ch == "D") {
                int y1 = st.top();
                int y2 = 2 * y1;
                st.push(y2);
            }
            else if(ch == "C") {
                st.pop();
            }
            else {
                st.push(stoi(ch));
            }
        }

        while(!st.empty()) {
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};