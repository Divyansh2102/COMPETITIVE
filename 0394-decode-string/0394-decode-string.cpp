class Solution {
public:
    string repeat(string& s, int times) {
        for(int n = size(s); --times; s += s.substr(0, n));
        return s;
    }    
    string decodeString(string& s) {
        stack<pair<string, string>> st;
        string ans = "", n = "";
        for(auto c : s)
            if(isalpha(c))      ans += c;
            else if(isdigit(c)) n += c;
            else if(c == '[')   st.push({move(n), move(ans)});
            else {
                auto [cnt, prev] = st.top(); st.pop();
                ans = prev + repeat(ans, stoi(cnt));
            }

        return ans;
    }
};