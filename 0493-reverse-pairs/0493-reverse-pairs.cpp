class Solution {
public:
    int merge(vector<int>&nums,int l,int mid,int h){
        int c=0;
        int j=mid+1;
        for(int i=l;i<=mid;i++){
            while(j<=h && nums[i]>2LL*nums[j])  j+=1;
            c+=j-(mid+1);
        }
        vector<int>temp;
        int left=l,right=mid+1;
        while(left<=mid && right<=h){
            if(nums[left]<nums[right])
                temp.emplace(temp.end(),nums[left++]);
            else    temp.emplace(temp.end(),nums[right++]);
        }
        while(left<=mid)    temp.emplace(temp.end(),nums[left++]);
        while(right<=h)     temp.emplace(temp.end(),nums[right++]);
        for(int i=l;i<=h;i++)   nums[i]=temp[i-l];
        return c;
    }
    int mergeSort(vector<int>&nums,int l,int h){
        if(l>=h) return 0;
        int mid=l+(h-l)/2;
        int ans=mergeSort(nums,l,mid);
        ans+=mergeSort(nums,mid+1,h);
        ans+=merge(nums,l,mid,h);
        return ans;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums,0,nums.size()-1);
    }
};