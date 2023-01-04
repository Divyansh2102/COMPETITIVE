class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n1=s1.length();
        int n2=s2.length();
        if(n1!=n2)
            return false;
        else{
            int first=INT_MIN,second=INT_MIN;
            for(int i=0;i<n1;i++){
                if(s1[i]!=s2[i]){
                    if(first==INT_MIN)
                        first=i;
                    else{
                        second=i;
                         char s=s2[first];
                        s2[first]=s2[second];
                        s2[second]=s;
                        break;
                    }
                }
            }
        }
        return s1==s2;
    }
};