class Solution {
public:
    void gena(vector<string>&ans,string st,int oc,int cc,int n){
        if(oc==n && cc==n){
            ans.push_back(st);
            return ;
        }
        if(oc<n)    gena(ans,st+"(",oc+1,cc,n);
        if(cc<oc)   gena(ans,st+")",oc,cc+1,n);
    }
    vector<string> generateParenthesis(int n) {
        int oc,cc;
        oc=cc=0;
        vector<string>ans;
        gena(ans,"",oc,cc,n);
        return ans;
    }
};

