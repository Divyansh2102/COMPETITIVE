class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int x=0;
        for(int i=0;i<n;i++){
            string t=operations[i];
            if(t[0]=='X'){
                if(t[1]=='+')
                    x+=1;
                else
                    x-=1;
            }
            else if(t[0]=='+')
                x+=1;
            else
                x-=1;
        }
        return x;
    }
};