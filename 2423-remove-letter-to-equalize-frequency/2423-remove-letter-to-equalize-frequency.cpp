class Solution {
public:
    bool equalFrequency(string w) {
        vector<int>v(26,0);
        for(auto i:w)    v[i-'a']++;
        for(int i=0;i<26;i++){
            vector<int>temp=v;
            if(temp[i]<=0)  continue;
            temp[i]-=1;
            set<int>st;
            for(int j=0;j<temp.size();j++){  
                if(temp[j]>0) st.insert(temp[j]);
            }
            if(st.size()==1) return 1;
        }
        return 0;
    }
};