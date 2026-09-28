class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        stack<string> s;

        for(auto ch : logs) {
            if(ch == "../" && !s.empty()) {
                s.pop();
            } 
            // if (ch == "./") {
            //     continue;
            // }
            else if (ch != "../" && ch != "./"){
                s.push(ch);
            }
        }
        return s.size();
    }
};