class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int i=a.size()-1,j=b.size()-1;
        int c=0;
        int temp=0;
        while(i>=0 || j>=0){
            temp=c;
            if(i>=0)    temp+=a[i--]-'0';
            if(j>=0)    temp+=b[j--]-'0';
            c=temp>1?1:0;
            ans+=to_string(temp%2);
        }
        if(c>=1)    ans+="1";
        reverse(ans.begin(),ans.end());
        return ans;
    }
};