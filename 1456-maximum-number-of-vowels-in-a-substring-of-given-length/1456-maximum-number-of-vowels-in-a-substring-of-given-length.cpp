class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0,j=0,max_ans=0;
        int temp=0;
        while(j<s.length()){
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){   
                temp+=1;
            }
            if(j-i==k){
                if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                    temp-=1;
                }
                i+=1;
            }
            max_ans=max(max_ans,temp);
            j+=1;
        }
        return max_ans;
    }
};