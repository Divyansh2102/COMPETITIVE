class Solution {
public:
    vector<int> intersection(vector<int>& n1, vector<int>& n2) {
        sort(n1.begin(),n1.end());
        sort(n2.begin(),n2.end());
        int s1=n1.size(),s2=n2.size();
        int i=0,j=0;
        set<int>st;
        while(i<s1 && j<s2){
            if(n1[i]==n2[j]){
                st.insert(n1[i]);
                i+=1,j+=1;
            }
            else if(n1[i]<n2[j])    i+=1;
            else    j+=1;
        }
        vector<int>ans(st.begin(),st.end());
        return ans;
    }
};