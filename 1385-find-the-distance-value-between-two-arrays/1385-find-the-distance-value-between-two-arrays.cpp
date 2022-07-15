class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c,r=0;
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++){
            c=0;
            for(int j=0;j<arr2.size();j++){
                if(abs(arr1[i]-arr2[j])<=d)
                    c++;
            }
            if(c==0)
                r++;
        }
        return r;              
    }
};