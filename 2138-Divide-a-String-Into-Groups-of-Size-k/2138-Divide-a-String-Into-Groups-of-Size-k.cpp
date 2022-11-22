class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> v;
     
        int i=0;
        while(i<s.length()){
            int j=i+k-1;
            if(j>=s.length()) break;
            string str="";
            while(i<=j){
                str = str+s[i];
                i++;
            }
            v.push_back(str);
            
        }
         cout<<i;
        if(i!=s.length()){
            string str="";
            while(i<s.length()){
                str= str+s[i];
                i++;
            }
            while(str.length()!=k){
                str = str+fill;
            }
            v.push_back(str);
        }
        
        return v;
    }
};