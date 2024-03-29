class Solution {
    public List<List<Integer>> fourSum(int[] nums, int target) {
        int n=nums.length;
        Arrays.sort(nums);
        Set<List<Integer>>list=new HashSet<>();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int l=j+1,r=n-1;
                while(l<r){
                    long s=(long)nums[i]+(long)nums[j]+(long)nums[l]+(long)nums[r];
                    if(s==target){
                        List<Integer>temp=new ArrayList<>();
                        temp.add(nums[i]);
                        temp.add(nums[j]);
                        temp.add(nums[l]);
                        temp.add(nums[r]);
                        list.add(temp);
                    }
                    if(s>target)    r-=1;
                    else    l+=1;
                }
            }
        }
        return new ArrayList(list);
    }
}