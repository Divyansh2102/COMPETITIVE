class Solution {
public:
    bool check(vector<int>&p,int mid,int h){
        int count=0;
        for(int i=0;i<p.size();i++){
            double temp=(double)p[i]/(double)mid;
            if(temp>(int)temp)
                count+=(int)temp+1;
            else
                count+=temp;
        }
         if(count>h)
             return false;
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int mid,left=1,right=1e9+5,ans=0;
        while(left<right){
            mid=left+(right-left)/2;
            if(check(piles,mid,h)){
                ans=mid,right=mid;
            }
            else
                left=mid+1;
        }
        return ans;
    }
};