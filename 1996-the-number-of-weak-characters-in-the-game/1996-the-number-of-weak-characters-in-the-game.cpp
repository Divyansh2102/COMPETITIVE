class Solution {
public:
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0])
            return a[1]>b[1];
        return a[0]<b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),comp);
        int c=0;
        int ma=INT_MIN;
        for(int i=p.size()-1;i>=0;i--){
            if(p[i][1]<ma)
                c++;
            ma=max(ma,p[i][1]);
        }        
        return c;
    }
};