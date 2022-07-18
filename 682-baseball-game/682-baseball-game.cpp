class Solution {
public:
    int calPoints(vector<string>& o) {
        int sum=0,k=0;
        vector<int>v;
        for(int i=0;i<o.size();i++){
            if(o[i]!="C"&&o[i]!="D"&&o[i]!="+"){
                v.push_back(stoi(o[i]));
                k++;
            }
            else if(o[i]=="C"){
                v.pop_back();
                k--;
            }
            else if(o[i]=="D"){
                v.push_back(v[k-1]*2);
                k++;
            }
            else{
                v.push_back(v[k-1]+v[k-2]);
                k++;
            }
        }
        for(int i=0;i<v.size();i++)
            sum+=v[i];
        return sum;
    }
};