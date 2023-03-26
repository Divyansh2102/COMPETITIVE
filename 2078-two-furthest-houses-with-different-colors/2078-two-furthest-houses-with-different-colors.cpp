class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans=0;
        for(int i=0;i<colors.size();i++){
            int temp=0;
            for(int j=i+1;j<colors.size();j++){
                temp+=1;
                if(colors[i]!=colors[j]){
                    ans=max(ans,temp);
                }
                
            }
        }
        return ans;
    }
};