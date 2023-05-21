class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,j,ind=0,n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ind++]=chars[i];
            int len=j-i;
            if(len>1){
                string cnt=to_string(len);
                for(auto c:cnt) chars[ind++]=c;
            }
            i=j;
        }
        return ind;
    }
};