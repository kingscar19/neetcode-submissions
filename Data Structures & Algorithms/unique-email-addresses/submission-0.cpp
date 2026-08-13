class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> uniqueEmails;

        for( const string& email : emails) {

            size_t atPos = email.find("@");
            string local = email.substr(0,atPos);
            string domain = email.substr(atPos);

            string filtered = "";

            for(char c : local) {
                if(c == '+') {
                    break;
                }
                if(c == '.') {
                    continue;
                }
                filtered += c;
            }

            string complete = filtered + domain;

            uniqueEmails.insert(complete);
        }
        return uniqueEmails.size();
    }
};