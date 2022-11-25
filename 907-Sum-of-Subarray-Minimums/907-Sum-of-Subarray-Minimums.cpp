class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n),right(n);
        stack<pair<int,int>>st1,st2;
        
        for(int i=0;i<n;i++){
            int count=1;
            while(!st1.empty() && st1.top().first>arr[i]){
                count+=st1.top().second;
                st1.pop();
            }
            st1.push({arr[i],count});
            left[i]=count;
        }
        for(int i=n-1;i>=0;i--){
            int count=1;
            while(!st2.empty() && st2.top().first>=arr[i]){
                count+=st2.top().second;
                st2.pop();
            }
            st2.push({arr[i],count});
            right[i]=count;
        }
        long res=0,mod=1e9+7;
        for(int i=0;i<n;i++){
            res=(res+(long)arr[i]*left[i]*right[i])%mod;
        }
        return res;
    }
};

/*
class Solution {
public:
    vector<int> mini(vector<vector<int>>&v){
        vector<int>temp;
        for(int i=0;i<v.size();i++){
            int m=v[i][0];
            for(int j=1;j<v[i].size();j++){
                if(m>v[i][j])
                    m=v[i][j];
            }
            temp.push_back(m);
        }
        return temp;
    }
    int sumSubarrayMins(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                vector<int>temp;
                for(int k=i;k<=j;k++){
                    temp.push_back(arr[k]);
                }
                v.push_back(temp);
                temp.clear();
            }
        }
        int ans=0;
        vector<int>temp=mini(v);
        for(int i=0;i<temp.size();i++)
            ans+=temp[i]%1000000007;
        return ans;
    }
};
*/