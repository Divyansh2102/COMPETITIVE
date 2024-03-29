class Solution {
    public int[] countBits(int n) {
        int[] ans = new int[n + 1];
        for (int i = 0; i <= n; i++) {
            int c = 0;
            int temp = i; 
            while (temp > 0) { 
                if ((temp & 1) == 1) 
                    c += 1;
                temp >>= 1; 
            }
            ans[i] = c;
        }
        return ans;
    }
}