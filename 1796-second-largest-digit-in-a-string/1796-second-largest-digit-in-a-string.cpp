class Solution {
public:
    int secondHighest(string s) {
        int max=INT_MIN,smax=INT_MIN;
        set<int>st;
        for(int i=0;i<s.size();i++){
            int x=s[i]-'0';
            if(x<=9 && x>=0){
                st.insert(x);
            }
        }
        if(st.size()==1)
            return -1;
        for(auto i:st){
            if(i>max){
                    smax=max;
                    max=i;
                }
        }
        if(smax==max)
            return -1;
        return smax;
    }
};