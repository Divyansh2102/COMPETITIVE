class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int c=0;
        for(int i=0;i<nums.size()-2;i++){
            for(int j=i+1;j<nums.size()-1;j++){
                for(int k=j+1;k<nums.size();k++){
                    if(i!=j && j!=k){
                        if(nums[j]-nums[i]==diff && nums[k]-nums[j]==diff)
                            c++;
                    }
                }
            }
        }
        return c;
    }
};