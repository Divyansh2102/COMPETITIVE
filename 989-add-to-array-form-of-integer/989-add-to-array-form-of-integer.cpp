class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int carry=0,sum=0;
        vector<int>a;
        for(int i=num.size()-1;i>=0||k!=0;i--){
            if(i>=0)
                sum=num[i]+carry+k%10;
            else
                sum=carry+k%10;
            carry=sum/10;
            a.push_back(sum%10);
            k/=10;
        }
        if(carry==1)
            a.push_back(1);
        reverse(a.begin(),a.end());
        return a;
    }
};