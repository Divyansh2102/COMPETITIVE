class Solution {
public:
    string removeStars(string s) {
        string temp="";
        for(auto &i:s){
            if(i=='*')  temp.pop_back();
            else    temp+=i;
        }
        return temp;
    }
};