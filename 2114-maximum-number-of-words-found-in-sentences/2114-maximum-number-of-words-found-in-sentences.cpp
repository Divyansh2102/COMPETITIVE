class Solution {
public:
    int mostWordsFound(vector<string>& s) {
        int ans=INT_MIN;
        for(int i=0;i<s.size();i++){
            int temp=0;
            string t=s[i];
            for(auto j:t){
                if(j==' ')  temp+=1;
            }
            temp+=1;
            ans=max(ans,temp);
        }
        return ans;
    }
};