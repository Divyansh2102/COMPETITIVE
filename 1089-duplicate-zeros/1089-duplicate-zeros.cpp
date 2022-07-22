class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
        vector<int>v;
        int i=0;
        while(i<n){
            if(arr[i]==0){
                v.push_back(arr[i]);
                v.push_back(0);
            }
            else
                v.push_back(arr[i]);
            i++;
        }
        for(int i=0;i<n;i++)
            arr[i]=v[i];
    }
};