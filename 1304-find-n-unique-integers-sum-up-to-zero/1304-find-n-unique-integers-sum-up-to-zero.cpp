class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int x=1;
        if(n==1)
            return {0};
        if(n%2!=0){
            v.push_back(0);
            n-=1;
            while(n>=1){
                v.push_back(x);
                v.push_back(-x);
                x++;
                n-=2;
            }
        }
        else{
            while(n>=1){
                v.push_back(x);
                v.push_back(-x);
                x++;
                n-=2;
            }
        }
        sort(v.begin(),v.end());
        return v;
    }
};