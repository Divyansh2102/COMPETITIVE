class NumArray {
public:
    vector<int>pref;
    int sum=0;
    NumArray(vector<int>& nums) {
        pref=nums;
        sum=0;
        for(int i=0;i<nums.size();i++)
            sum+=nums[i];
    }
    
    void update(int index, int val) {
        sum-=pref[index];
        pref[index]=val;
        sum+=val;
    }
    int sumRange(int left, int right) {
        //return accumulate(this->nums.begin()+left,this->nums.begin()+1+right,0);
       int res=sum; 
        for(int i=0;i<left;i++){
            res-=pref[i];
        }
        for(int i=right+1;i<pref.size();i++){
            res-=pref[i];
        }
        return res;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(index,val);
 * int param_2 = obj->sumRange(left,right);
 */