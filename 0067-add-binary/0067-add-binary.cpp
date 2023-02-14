class Solution {
public:
    string addBinary(string a, string b) {
        string result="";
        int c=0;
        int i=a.length()-1,j=b.length()-1;
        int ans=0;
        while(i>=0 || j>=0){
            ans=c;
            if(i>=0)
                ans+=a[i--]-'0';
            if(j>=0)
                ans+=b[j--]-'0';
            c=ans>1?1:0;
            result+=to_string(ans%2);
        }
        if(c>=1)
            result+=to_string(1);
        reverse(result.begin(),result.end());
        return result;
    }
};

