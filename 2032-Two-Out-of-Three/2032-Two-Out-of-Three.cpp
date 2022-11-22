class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& n1, vector<int>& n2, vector<int>& n3) {
        // unordered_map<int,int>m1;
        // unordered_map<int,int>m2;
        // unordered_map<int,int>m3;
        // unordered_map<int,int>m4;
        // for(auto i:n1){
        //     m1[i]++;
        //     m4[i]++;
        // }
        // for(auto i:n2){
        //     m2[i]++;
        //     m4[i]++;
        // }
        // for(auto i:n3){
        //     m3[i]++;
        //     m4[i]++;
        // }
        // vector<int>ans;
        // for(auto i:m4){
        //     cout<<i.first<<"    "<<i.second<<endl;
        //     int c=0;
        //     if(m1.find(i.first)!=m1.end()){
        //         if(m1[i.second]>=1)
        //             c++;
        //     }
        //     if(m2.find(i.first)!=m2.end()){
        //         if(m2[i.second]>=1)
        //             c++;
        //     }
        //     if(m3.find(i.first)!=m3.end()){
        //         if(m3[i.second]>=1)
        //             c++;
        //     }
        //     cout<<c<<endl;
        //     if(c>=2){
        //         ans.push_back(m4[i.first]);
        //     }
        // }
        // return ans;
        unordered_map<int,set<int>>st;
        for(auto i:n1){
            st[i].insert(1);
        }
        for(auto i:n2){
            st[i].insert(2);
        }
        for(auto i:n3){
            st[i].insert(3);
        }
        vector<int>ans;
        for(auto i=st.begin();i!=st.end();i++){
            if(i->second.size() >= 2)
                ans.push_back(i->first);
        }
        return ans;
    }
    
};