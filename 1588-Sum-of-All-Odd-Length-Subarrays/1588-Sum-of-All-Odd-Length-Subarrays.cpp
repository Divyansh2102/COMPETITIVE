class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>temp;
                for(int k=i;k<=j;k++){
                    temp.push_back(arr[k]);
                }
                if(temp.size()%2!=0)
                    ans.push_back(temp);
            }
        }
        int sum=0;
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++)
                sum+=ans[i][j];
        }
        return sum;
    }
};