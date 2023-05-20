class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>peven;
        priority_queue<int>podd;
        int i=0;
        string s=to_string(num);
        int n=s.size();
        while(n--){
            if(s[i]%2==0)
                peven.push(s[i]);
            else
                podd.push(s[i]);
            i+=1;
        }
        i=0;
        string ans;
        while(!peven.empty() || !podd.empty()){
            if(s[i]%2==0){
                ans+=peven.top();
                peven.pop();
                
            }
            else{
                ans+=podd.top();
                podd.pop();
            }
            i++;
        }
        num=stoi(ans);
        return num;
    }
};