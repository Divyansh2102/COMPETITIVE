class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n=forts.size();
        int ans=0,count=0;
        for(int i=0;i<n;i++){
            if(forts[i]==1){
                for(int j=i-1;j>=0;j--){
                    if(forts[j]==0)     count+=1;
                    else if(forts[j]==-1){
                        ans=max(count,ans);
                        count=0;
                        break;
                    }
                    else    break;
                }
                count=0;
                for(int j=i+1;j<n;j++){
                    if(forts[j]==0) count+=1;
                    else if(forts[j]==-1){
                        ans=max(ans,count);
                        count=0;
                        break;
                    }
                    else    break;
                }
            }
        }
        return ans;
    }
};
