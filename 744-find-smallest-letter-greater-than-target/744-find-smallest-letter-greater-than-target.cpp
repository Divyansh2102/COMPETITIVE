class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char target) {
        char s;
        if(l[l.size()-1]<=target)
            s= l[0];
        else{
            for(int i=0;i<l.size();i++){
                if(l[i]>target){
                    s=l[i];
                    break;
                }
            }
        }
        return s;
    }
};