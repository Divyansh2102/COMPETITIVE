class Solution {
public:
    vector<int>temp;
    Solution(vector<int>& nums) {
        temp=nums;
    }
    
    int pick(int target) {
        int n=temp.size();
        int c=0;
        int id=0;
        for(int i=0;i<n;i++){
            if(temp[i]==target){
                c+=1;
                if(rand()%c==0)
                    id=i;
            }
        }
        return id;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */