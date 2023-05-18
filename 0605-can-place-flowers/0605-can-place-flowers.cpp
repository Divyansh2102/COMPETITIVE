class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        f.insert(f.begin(),0);
        f.push_back(0);
        for(int i=1;i<f.size()-1;i++){
            if(f[i-1]+f[i]+f[i+1]==0){
                f[i]=1;
                n-=1;
            }
        }
        if(n<=0)    return 1;
        return 0;
    }
};