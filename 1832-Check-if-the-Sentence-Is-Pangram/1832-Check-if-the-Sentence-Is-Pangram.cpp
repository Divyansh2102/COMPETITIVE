class Solution {
public:
    bool checkIfPangram(string s) {
        vector<char>v(26,0);
        for(auto i:s)
            v[i-'a']++;
        for(auto i:v){
            if(i==0)
                return false;
        }
        return true;
    }
};