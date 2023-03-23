class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        set<int>st(arr.begin(),arr.end());
        int i=1;
        while(1){
            if(st.find(i)==st.end()){
                k--;
                if(k==0)    return i;
            }
            i++;
        }
        return i;
    }
};