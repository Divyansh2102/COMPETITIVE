class Solution {
public:
    void gen(int n,string st,vector<string>&ans,int oc,int cc){
        if(oc==n && cc==n){
            ans.push_back(st);
            return;
        }
        if(oc<n){
            gen(n,st+"(",ans,oc+1,cc);
        }
        if(cc<oc){
            gen(n,st+")",ans,oc,cc+1);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int oc=0,cc=0;
        gen(n,"",ans,oc,cc);
        return ans;
    }
};