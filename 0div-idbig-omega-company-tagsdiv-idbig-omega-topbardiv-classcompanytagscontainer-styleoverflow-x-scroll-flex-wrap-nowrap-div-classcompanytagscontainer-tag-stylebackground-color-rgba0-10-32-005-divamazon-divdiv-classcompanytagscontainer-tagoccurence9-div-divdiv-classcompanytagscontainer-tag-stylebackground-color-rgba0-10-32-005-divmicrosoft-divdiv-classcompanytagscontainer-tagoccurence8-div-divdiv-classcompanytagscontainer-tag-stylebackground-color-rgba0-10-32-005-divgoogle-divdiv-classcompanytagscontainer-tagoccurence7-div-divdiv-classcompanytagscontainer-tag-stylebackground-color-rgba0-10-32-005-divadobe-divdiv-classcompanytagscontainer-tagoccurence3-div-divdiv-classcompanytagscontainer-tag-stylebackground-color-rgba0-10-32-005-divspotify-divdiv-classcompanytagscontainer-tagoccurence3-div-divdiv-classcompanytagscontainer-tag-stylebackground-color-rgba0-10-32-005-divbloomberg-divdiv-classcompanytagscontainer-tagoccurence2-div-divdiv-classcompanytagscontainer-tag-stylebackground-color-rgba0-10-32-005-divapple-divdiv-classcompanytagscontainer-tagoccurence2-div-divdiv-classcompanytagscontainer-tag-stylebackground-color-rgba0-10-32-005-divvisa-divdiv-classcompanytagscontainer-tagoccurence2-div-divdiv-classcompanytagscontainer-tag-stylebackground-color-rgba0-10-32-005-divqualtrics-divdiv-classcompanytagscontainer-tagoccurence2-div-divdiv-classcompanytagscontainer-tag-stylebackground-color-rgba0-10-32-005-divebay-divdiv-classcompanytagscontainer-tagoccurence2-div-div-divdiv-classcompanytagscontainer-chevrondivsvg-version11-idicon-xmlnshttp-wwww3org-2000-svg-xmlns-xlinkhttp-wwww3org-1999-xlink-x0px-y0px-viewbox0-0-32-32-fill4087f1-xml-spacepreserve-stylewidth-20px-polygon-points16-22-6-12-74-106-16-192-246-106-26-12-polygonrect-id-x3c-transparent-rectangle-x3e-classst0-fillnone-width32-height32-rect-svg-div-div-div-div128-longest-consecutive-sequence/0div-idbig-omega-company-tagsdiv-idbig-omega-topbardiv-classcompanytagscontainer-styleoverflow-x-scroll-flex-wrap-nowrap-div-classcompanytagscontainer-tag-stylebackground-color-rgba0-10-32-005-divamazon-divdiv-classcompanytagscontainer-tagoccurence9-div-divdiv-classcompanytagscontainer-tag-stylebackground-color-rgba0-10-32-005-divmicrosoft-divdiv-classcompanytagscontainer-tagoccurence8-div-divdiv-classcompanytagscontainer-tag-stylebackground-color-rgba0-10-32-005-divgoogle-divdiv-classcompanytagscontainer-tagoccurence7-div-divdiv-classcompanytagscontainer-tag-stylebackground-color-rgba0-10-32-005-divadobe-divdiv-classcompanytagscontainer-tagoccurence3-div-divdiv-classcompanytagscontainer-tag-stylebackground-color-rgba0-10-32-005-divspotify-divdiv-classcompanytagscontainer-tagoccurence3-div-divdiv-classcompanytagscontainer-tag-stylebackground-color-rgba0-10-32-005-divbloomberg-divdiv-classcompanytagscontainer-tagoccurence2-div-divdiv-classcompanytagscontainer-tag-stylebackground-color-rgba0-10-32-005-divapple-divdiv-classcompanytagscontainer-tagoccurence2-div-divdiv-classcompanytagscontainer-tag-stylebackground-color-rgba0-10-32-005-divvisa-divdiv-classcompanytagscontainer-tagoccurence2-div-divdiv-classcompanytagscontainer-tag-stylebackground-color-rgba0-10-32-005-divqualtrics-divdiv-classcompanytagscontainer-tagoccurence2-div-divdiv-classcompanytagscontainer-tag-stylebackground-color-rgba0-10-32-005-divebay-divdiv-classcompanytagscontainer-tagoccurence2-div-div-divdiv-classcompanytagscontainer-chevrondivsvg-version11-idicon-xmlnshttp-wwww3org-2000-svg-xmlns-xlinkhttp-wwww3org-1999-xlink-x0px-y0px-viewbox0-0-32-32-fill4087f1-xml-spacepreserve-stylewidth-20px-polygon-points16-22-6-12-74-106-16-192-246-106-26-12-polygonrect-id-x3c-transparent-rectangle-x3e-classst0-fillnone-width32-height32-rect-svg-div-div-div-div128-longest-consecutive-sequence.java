class Solution {
    public int longestConsecutive(int[] nums) {
        int n=nums.length;
        if(n==0)    return 0;
        
        Set<Integer>st=new HashSet<>();
        for(int i:nums) st.add(i);
        
        int ans=1;
        
        for(int i:st){
            if(!st.contains(i-1)){
                int cnt=1;
                int x=i;
                while(st.contains(x+1)){
                    cnt+=1;
                    x+=1;
                }
                ans=Math.max(ans,cnt);
            }
        }
        return ans;
    }
}