class Solution {
public:
    vector<int>count(int n){
        vector<int>v(10);
        while(n>0){
            v[n%10]++;
            n/=10;
        }
        return v;
    }
    bool reorderedPowerOf2(int n) {
        vector<int>countN=count(n);
        int num=1;
        for(int i=0;i<31;i++){
            if(countN==count(num))
                return true;
            num=num<<1;
        }
        return false;
    }
};