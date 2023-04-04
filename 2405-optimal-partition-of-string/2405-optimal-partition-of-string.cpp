class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int c=0,i=0,j=0,n=s.length();
        while(j<n){
            if(mp.find(s[j])!=mp.end()){
                c+=1;
                mp.clear();
                i=j;
                mp[s[j]]++;
            }
            else{
                mp[s[j]]++;
            }
            j+=1;
        }
        if(!mp.empty()) c+=1;
        return c;
    }
};