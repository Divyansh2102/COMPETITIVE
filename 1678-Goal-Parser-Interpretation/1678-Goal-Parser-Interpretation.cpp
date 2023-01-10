class Solution {
public:
    string interpret(string c) {
        string st="";
        for(int i=0;i<c.length();i++){
            if(c[i]=='G')
                st+="G";
            else if(c[i]=='(' && c[i+1]==')'){
                st+="o";
                i+=1;
            }
            else if(c[i]=='(' && c[i+1]=='a'){
                st+="al";
                i+=3;
            }   
        }
        return st;
    }
};