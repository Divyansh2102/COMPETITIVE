class Solution {
    public void sortColors(int[] nums) {
        int n=nums.length;
        int z=0,o=0,t=0;
        for(int i:nums){
            if(i==0)    z+=1;
            else if(i==1)   o+=1;
            else    t+=1;
        }
        for(int i=0;i<n;i++){
            if(z>0){
                nums[i]=0;
                z-=1;
            }
            else if(o>0){
                nums[i]=1;
                o-=1;
            }
            else{
                nums[i]=2;
                t-=1;
            }
        }
        return;
    }
}