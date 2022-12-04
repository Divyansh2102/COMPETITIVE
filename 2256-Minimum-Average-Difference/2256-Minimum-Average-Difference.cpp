class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        int n = nums.size();
        long long md = INT_MAX, ans = -1;
        vector<long long> ps(n, 0);
        for (int i = 0; i < n; i++)
            ps[i] = nums[i] + ((i == 0) ? 0 : ps[i - 1]);
        for (int i = 0; i < n; i++)
        {
            long long s1 = ps[i], s2 = ps[n - 1] - ps[i];
            long long d = abs(s1 / (long long)(i + 1) - ((i == n - 1) ? 0 : s2 / (long long)(n - i - 1)));
            if (d < md){
                ans = i;
                md = d;
            }
        }
        return ans;
    } 
};