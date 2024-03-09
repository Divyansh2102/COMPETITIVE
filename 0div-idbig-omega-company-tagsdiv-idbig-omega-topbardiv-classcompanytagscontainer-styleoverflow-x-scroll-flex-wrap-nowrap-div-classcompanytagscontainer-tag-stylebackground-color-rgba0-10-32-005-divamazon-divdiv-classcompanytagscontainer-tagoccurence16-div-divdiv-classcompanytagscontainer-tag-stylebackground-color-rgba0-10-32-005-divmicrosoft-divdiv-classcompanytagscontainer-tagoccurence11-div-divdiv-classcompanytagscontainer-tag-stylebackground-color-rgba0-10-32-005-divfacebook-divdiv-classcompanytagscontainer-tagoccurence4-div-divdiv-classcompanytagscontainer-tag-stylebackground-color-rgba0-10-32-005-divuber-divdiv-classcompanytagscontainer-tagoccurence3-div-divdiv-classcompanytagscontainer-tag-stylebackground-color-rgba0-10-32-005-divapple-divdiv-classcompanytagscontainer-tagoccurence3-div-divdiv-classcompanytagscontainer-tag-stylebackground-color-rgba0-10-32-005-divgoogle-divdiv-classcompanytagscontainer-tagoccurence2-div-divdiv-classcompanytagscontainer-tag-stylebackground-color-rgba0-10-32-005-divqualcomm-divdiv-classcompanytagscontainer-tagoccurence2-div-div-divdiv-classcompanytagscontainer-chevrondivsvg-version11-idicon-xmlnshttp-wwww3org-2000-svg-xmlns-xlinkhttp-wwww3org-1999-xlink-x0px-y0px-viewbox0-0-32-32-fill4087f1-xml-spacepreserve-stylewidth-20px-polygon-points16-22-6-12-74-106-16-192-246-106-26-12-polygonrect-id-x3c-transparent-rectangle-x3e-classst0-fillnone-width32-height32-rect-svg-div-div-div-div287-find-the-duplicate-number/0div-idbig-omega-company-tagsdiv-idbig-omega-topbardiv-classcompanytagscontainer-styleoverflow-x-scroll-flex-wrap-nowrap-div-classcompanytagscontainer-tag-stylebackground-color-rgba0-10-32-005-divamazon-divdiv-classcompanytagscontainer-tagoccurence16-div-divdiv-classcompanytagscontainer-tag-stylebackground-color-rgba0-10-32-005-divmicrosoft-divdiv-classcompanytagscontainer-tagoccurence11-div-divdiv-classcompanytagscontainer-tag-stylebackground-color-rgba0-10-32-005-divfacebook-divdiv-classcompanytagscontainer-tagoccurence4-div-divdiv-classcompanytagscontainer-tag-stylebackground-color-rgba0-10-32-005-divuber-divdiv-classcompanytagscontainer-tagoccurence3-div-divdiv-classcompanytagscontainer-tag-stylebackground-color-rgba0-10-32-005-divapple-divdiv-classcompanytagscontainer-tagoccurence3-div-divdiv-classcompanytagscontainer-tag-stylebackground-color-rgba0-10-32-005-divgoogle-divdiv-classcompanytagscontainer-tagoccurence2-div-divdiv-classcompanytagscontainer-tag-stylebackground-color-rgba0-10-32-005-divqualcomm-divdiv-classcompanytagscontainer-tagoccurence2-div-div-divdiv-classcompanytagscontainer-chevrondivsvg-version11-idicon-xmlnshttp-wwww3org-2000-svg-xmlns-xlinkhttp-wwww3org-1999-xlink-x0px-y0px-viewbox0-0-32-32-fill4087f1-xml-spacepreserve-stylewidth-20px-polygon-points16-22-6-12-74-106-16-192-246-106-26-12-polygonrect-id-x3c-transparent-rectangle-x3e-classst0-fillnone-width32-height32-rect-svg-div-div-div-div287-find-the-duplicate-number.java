class Solution {
    public int findDuplicate(int[] nums) {
        int i=0;
        while(true){
            i=Math.abs(nums[i]);
            if(nums[i]<0)   return i;
            nums[i]*=-1;
        }
    }
}