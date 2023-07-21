class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        if(s=="" || n==0)   return 0;
        int cNum=0,lastN=0,res=0;
        char sign='+';
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                cNum=cNum*10+(s[i]-'0');
            }
            if(!isdigit(s[i]) && !iswspace(s[i])||i==n-1){
                if(sign=='+' || sign=='-'){
                    res+=lastN;
                    lastN=(sign=='+')?cNum:-cNum;
                }    
                else if(sign=='*') lastN*=cNum;
                else if(sign=='/') lastN/=cNum;
                sign=s[i];
                cNum=0;
            }
        }
        res+=lastN;
        return res;
    }
};