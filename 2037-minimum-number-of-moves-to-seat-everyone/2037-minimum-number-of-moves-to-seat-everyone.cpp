class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
        sort(se.begin(),se.end());
        sort(st.begin(),st.end());
        int minC=0;
        for(int i=0;i<se.size();i++){
            minC+=abs(se[i]-st[i]);
        }
        return minC;
    }
};