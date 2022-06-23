class Solution {
public:
    bool rotateString(string s, string goal) {
        int m=s.length();
        int n=goal.length();
        if(m!=n)
            return false;
        
        for(int i=0;i<m;i++){
            char ch=s[0]; 
            s.erase(0,1);
            s.push_back(ch);
            if(s==goal)
                return true;
        }
        
        return false;
    }
};