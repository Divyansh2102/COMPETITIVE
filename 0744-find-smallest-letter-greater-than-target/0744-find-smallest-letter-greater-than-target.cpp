class Solution {
public:
    char nextGreatestLetter(vector<char>& l, char t) {
        int i=0,n=l.size();
        int j=n-1;
        if(l[0]>t)  return l[0];
        else if(l[j]<=t) return l[0];
        char ans;
        while(i<=j){
            int mid=(i+j)/2;
            if(l[mid]>t){
                ans=l[mid];
                j=mid-1;
            }
            else i=mid+1;
        }
        return ans;
    }
};
