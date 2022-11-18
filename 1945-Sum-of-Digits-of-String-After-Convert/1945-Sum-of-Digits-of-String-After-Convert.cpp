class Solution {
public:
    int sumD(int sum){
        int ans=0;
        while(sum){
            ans+=sum%10;
            sum/=10;
        }
        return ans;
    }
    int getLucky(string s, int k) {
        int sum=0;
        for(auto &c:s){
            int val=c-'a'+1;
            sum+=val<10?val:(val%10 + val/10);
        }
        k--;
        while(k-- && sum>=10){
            sum=sumD(sum);
        }
        return sum;
    }
};