class Solution { 
    private void solve(int idx,int[] nums,List<List<Integer>>ans){
        if(idx==nums.length){
            List<Integer>temp=new ArrayList<>();
            for(int i=0;i<nums.length;i++)  temp.add(nums[i]);
            ans.add(new ArrayList(temp));
            return;
        }
        for(int i=idx;i<nums.length;i++){
            swap(i,idx,nums);
            solve(idx+1,nums,ans);
            swap(i,idx,nums);
        }
    }
    private void swap(int i,int j,int[] nums){
        int temp=nums[i];
        nums[i]=nums[j];
        nums[j]=temp;
    }
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>>ans=new ArrayList<>();
        solve(0,nums,ans);
        return ans;
    }
}