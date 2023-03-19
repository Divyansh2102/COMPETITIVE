class Solution {
public:
    string reformat(string s) {
        string nstr="",cstr="";
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i]))  cstr+=s[i];
            else    nstr+=s[i];
        }
        int cs=cstr.length(),ns=nstr.length();
        if(abs(cs-ns)>=2) return "";
        s="";
        if(cs>=ns){
            for(int i=0;i<cs;i++){
                s+=cstr[i];
                if(i<ns)
                    s+=nstr[i];
            }
        }
        else{
            for(int i=0;i<ns;i++){
                s+=nstr[i];
                if(i<cs)
                    s+=cstr[i];
            }
        }
        return s;
    }
};