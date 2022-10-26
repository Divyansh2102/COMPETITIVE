class Solution {
public:
    vector<string> findRestaurant(vector<string>& l1, vector<string>& l2) {
        unordered_map<int,vector<string>>mp;
        int n1=l1.size();
        int n2=l2.size();
        int m=INT_MAX;
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(l1[i]==l2[j]){
                    mp[i+j].push_back(l1[i]);
                    m=min(m,i+j);
                }
            }
        }
        return mp[m];
    }
};