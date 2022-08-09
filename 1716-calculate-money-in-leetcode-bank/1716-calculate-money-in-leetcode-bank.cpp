class Solution {
public:
    int totalMoney(int n) {
        int k=1,mon=1;
        vector<int>v(n,0);
        v[0]=1;
        for(int i=1;i<n;i++){
            if(k!=7){
                v[i]=v[i-1]+1;
                k++;
            }
            else{
                k=1;
                mon+=1;
                v[i]=mon;
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
            ans+=v[i];
        return ans;
    }
};