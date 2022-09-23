class Solution {
public:
    /*
    string deci_binary(int x){
        string s="";
        while(x){
            if(x&1)
                s+='1';
            else
                s+='0';
            x>>=1;
        }
        reverse(s.begin(),s.end());
        return s;
    }
    
     unsigned long long int binary_deci(string ans){
        unsigned long long int a=0;
        for(int i=ans.size()-1,j=0;i>=0;i--,j++){
            if(ans[i]=='1')
                a+=1*pow(2,j);
        }
        return a;
    }
    int concatenatedBinary(int n) {
        if(n==1)
            return 1;
        string ans="";
        for(int i=1;i<=n;i++){
            ans+=deci_binary(i);
        }
        cout<<ans<<endl;
        unsigned long long int a=binary_deci(ans);
        cout<<a;
        return a%1000000007;
    }
    */
    
    int concatenatedBinary(int n) {
        long long int val=0;
        int i=1;
        while(i<=n){
            val= ((val<<(1+(int(log2(i)))))%1000000007+i)%1000000007;
            i++;
        }
        return val;
    }
};