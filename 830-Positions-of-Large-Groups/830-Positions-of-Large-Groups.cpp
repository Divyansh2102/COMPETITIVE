class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>v;
        int i,j;
        for(i=0;i<s.size();i++){
            int sa=0,ea=0,c=0;
            sa=i;
            for(j=i;j<s.size();j++){
                if(s[j]==s[i]){
                    c++;
                }
                else if(s[j]!=s[i]){
                    ea=j-1;
                    if(c>=3){
                        v.push_back({sa,ea});
                        c=0;
                    }
                    i+=ea-sa;
                    break;
                }
            }
            //if only single character is repeating or the character having the right frequency is at the last the above for loop will break so the below if statement is to check that. 
            if(c>=3){
                ea=j-1;
                i+=ea-sa;
                v.push_back({sa,ea});
            }
        }
        return v;
    }
};