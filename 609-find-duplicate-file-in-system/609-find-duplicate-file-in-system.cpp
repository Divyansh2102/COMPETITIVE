class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(string pt:paths){
            int i;
            string p;
            for(i=0;i<pt.size() && pt[i]!=' ';i++)
                p+=pt[i];
            p+='/';
            i++;
            while(i<pt.size()){
                string file,data;
                while(i<pt.size()&&pt[i]!='('){
                    file+=pt[i];
                    i++;
                }
                while(i<pt.size()&&pt[i]!=' ')
                    data+=pt[i++];
                mp[data].push_back(p+file);
                ++i;
            }
        }
        for(auto &x:mp){
                if(x.second.size()>1)
                    ans.push_back(x.second);
        }
        return ans;
    }
};