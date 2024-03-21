class Solution {
    private int merge(int[] nums,int l,int mid,int h){
        int c=0;
        int j=mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=h && nums[i]>2L*nums[j])  j+=1;
            c+=j-(mid+1);
        }
        
        int[] temp = new int[h-l+1];
        int index = 0;
        int lft = l, rt = mid + 1;

        while (lft <= mid && rt <= h) {
            if (nums[lft] <= nums[rt]) temp[index++] = nums[lft++];
            else temp[index++] = nums[rt++];
        }

        while (lft <= mid) temp[index++] = nums[lft++];
        while (rt <= h) temp[index++] = nums[rt++];

        // for(int i=l;i<=h;i++)   nums[i]=temp[i-l];
        System.arraycopy(temp, 0, nums, l, temp.length);
        
        return c;
    }
    private int mergeSort(int[] nums,int st,int end){
        if(st>=end) return 0;
        int mid=st+(end-st)/2;
        int ans=mergeSort(nums,st,mid);
        ans+=mergeSort(nums,mid+1,end);
        ans+=merge(nums,st,mid,end);
        return ans;
    }
    public int reversePairs(int[] nums) {
        return mergeSort(nums,0,nums.length-1);
    }
}