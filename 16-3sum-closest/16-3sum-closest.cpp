class Solution {
public:
    int threeSumClosest(vector<int>& a, int target) {
        int n=a.size(),minDiff=INT_MAX,ans;
        sort(a.begin(),a.end());
for(int i=0;i<n-2;i++){
            if(i>0 && a[i]==a[i-1]) continue;
            int l=i+1,r=n-1;
            int x = target-a[i];
            while(l<r){
                int currSum = a[i]+a[l]+a[r];
                
                if(currSum == target) return target; //corner case // however,not required in this problem
                
                int diff = abs(currSum-target);
                if(diff<minDiff){
                    minDiff=diff;
                    ans=currSum;
                }
               
                if(a[l]+a[r]<x) l++;
                else r--;
                
            }
        }
        
        return ans;
       
    }
};