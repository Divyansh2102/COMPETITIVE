//TC->O(n)
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        int c=0,ind=0;
        int prev=nums[1]-nums[0];
        for(int i=1;i<n-1;i++){
            int diff=nums[i+1]-nums[i];
            if(diff==prev)
                ind+=1;
            else{
                prev=diff;
                ind=0;
            }
            c+=ind;
        }
        return c;
    }
};

/*
//TC->O(n^2)
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n=nums.size();
        if(n<3)
            return 0;
        int c=0;
        for(int i=0;i<n-2;i++){
            int diff=nums[i+1]-nums[i];
            for(int j=i+2;j<n;j++){
                if(nums[j]-nums[j-1]==diff)
                    c++;
                else
                    break;
            }
        }
        return c;
    }
};
*/