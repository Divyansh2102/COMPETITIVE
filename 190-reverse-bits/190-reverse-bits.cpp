class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            uint32_t lb=n&1;
            lb=lb<<(31-i);
            ans=ans|lb;
            n=n>>1;
        }
        return ans;
    }
};