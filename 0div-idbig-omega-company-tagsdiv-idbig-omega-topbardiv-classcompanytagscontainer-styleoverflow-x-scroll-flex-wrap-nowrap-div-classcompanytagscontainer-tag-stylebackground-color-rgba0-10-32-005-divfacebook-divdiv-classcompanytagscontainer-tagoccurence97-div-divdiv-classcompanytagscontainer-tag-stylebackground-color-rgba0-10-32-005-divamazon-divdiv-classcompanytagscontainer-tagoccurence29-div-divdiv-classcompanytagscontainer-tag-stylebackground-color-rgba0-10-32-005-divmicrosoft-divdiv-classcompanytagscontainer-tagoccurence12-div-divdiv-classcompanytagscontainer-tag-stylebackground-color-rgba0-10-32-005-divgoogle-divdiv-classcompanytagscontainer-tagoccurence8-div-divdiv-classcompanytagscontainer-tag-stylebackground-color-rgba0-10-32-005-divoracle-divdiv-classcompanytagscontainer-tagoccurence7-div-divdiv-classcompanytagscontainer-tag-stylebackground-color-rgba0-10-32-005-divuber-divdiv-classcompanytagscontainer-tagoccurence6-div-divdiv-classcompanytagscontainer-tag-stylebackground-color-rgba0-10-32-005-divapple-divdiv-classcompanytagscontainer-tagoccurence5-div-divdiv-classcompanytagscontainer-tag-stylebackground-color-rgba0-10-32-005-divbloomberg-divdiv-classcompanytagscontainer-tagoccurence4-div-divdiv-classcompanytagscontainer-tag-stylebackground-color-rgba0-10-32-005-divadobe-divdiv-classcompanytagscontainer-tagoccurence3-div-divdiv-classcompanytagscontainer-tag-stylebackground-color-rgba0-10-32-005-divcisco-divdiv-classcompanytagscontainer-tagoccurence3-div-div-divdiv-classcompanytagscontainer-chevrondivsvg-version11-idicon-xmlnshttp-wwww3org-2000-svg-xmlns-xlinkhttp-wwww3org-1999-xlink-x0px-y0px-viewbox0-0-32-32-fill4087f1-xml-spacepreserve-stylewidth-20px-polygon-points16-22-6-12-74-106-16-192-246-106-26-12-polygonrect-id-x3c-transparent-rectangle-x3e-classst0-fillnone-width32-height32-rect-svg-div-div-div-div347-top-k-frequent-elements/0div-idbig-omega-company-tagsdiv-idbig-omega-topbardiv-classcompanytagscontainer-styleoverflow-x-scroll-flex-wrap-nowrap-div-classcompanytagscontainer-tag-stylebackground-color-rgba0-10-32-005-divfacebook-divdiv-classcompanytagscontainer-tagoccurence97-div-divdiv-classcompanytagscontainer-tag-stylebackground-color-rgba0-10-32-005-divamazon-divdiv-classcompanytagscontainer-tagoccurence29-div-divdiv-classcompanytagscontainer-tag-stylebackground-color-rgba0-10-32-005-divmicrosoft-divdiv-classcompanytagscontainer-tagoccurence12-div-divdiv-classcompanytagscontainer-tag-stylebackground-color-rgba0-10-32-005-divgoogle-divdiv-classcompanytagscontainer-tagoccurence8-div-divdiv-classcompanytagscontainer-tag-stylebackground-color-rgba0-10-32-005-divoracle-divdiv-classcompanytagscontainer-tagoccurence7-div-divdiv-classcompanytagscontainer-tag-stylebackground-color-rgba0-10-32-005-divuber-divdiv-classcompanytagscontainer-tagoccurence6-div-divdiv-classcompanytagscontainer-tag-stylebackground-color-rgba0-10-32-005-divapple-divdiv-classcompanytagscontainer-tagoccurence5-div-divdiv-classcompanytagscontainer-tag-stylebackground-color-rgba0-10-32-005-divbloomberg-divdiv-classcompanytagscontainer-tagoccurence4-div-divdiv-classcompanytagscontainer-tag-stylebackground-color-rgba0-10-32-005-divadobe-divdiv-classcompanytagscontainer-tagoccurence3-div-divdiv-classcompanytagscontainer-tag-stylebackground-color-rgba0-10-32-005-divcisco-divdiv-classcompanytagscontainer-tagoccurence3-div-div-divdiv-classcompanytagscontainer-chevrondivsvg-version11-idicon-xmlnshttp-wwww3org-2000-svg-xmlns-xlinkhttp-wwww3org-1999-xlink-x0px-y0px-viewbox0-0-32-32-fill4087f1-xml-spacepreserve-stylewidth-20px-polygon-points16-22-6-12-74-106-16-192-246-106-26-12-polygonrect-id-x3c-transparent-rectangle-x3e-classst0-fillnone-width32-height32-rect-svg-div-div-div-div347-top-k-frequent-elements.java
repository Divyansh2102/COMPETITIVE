class Solution {
    public static int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer>mp=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            mp.put(nums[i],mp.getOrDefault(nums[i],0)+1);
        }
        PriorityQueue<Integer>minH=new PriorityQueue<>((n1,n2)->mp.get(n1)-mp.get(n2));
        for(int key:mp.keySet()){
            minH.add(key);
            if(minH.size()>k)   minH.poll();
        }
        int []ans=new int[k];
        for(int i=0;i<ans.length;i++)   ans[i]=minH.poll();
        return ans;
    }
}

