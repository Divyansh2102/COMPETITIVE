class Solution {
public:
    int numOfSubarrays(vector<int>& a, int k, int threshold) {
        int i=0,j=0,n=a.size();
        int ans=0,sum=0;
        while(j<n){
            sum+=a[j];
            if(j-i+1<k) j+=1;
            else if(j-i+1==k){
                if(sum/k>=threshold)    ans+=1;
                i+=1,j+=1;
                sum-=a[i-1];
            }
        }
        return ans;
    }
};