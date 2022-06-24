class Solution {
public:
    bool isPossible(vector<int>& target) {
        long sum=0;
        int maxi=0;
        for(int i=0;i<target.size();i+=1){
            sum+=target[i];
            if(target[i]>target[maxi])
                maxi=i;
        }
         long dif=sum-target[maxi];
        if(target[maxi]==1 || dif==1)
            return true;
        if(dif>target[maxi] || dif==0 || target[maxi]%dif==0)
            return false;
        target[maxi]%=dif;
        return isPossible(target);
    }
};