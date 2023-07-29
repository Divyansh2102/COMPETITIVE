class Solution {
public:
    int titleToNumber(string ct) {
        int ans=0;
        int x=0;
        for(int i=ct.size()-1;i>=0;i--){
            ans+=((ct[i]-'A')+1)*pow(26,x);
            x+=1;
        }
        return ans;
    }
};