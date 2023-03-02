class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0,id=0,n=chars.size();
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j])
                j++;
            chars[id++]=chars[i];
            int cnt=j-i;
            if(cnt>1){
                string st=to_string(cnt);
                for(auto x:st)
                    chars[id++]=x;
            }
            i=j;
        }
        return id;
    }
};