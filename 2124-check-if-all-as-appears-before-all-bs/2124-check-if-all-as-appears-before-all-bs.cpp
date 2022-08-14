class Solution {
public:
    bool checkString(string s) {
        int ca=0,cb=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a')
                ca++;
            else
                cb++;
        }
        int i=0;
        while(i<s.size()){
            if(s[i]=='b')
                break;
            ca--;
            i++;
        }
        cout<<ca<<" "<<cb;
        if(ca==0 && cb>=0)
            return true;
        return false;
    }
};