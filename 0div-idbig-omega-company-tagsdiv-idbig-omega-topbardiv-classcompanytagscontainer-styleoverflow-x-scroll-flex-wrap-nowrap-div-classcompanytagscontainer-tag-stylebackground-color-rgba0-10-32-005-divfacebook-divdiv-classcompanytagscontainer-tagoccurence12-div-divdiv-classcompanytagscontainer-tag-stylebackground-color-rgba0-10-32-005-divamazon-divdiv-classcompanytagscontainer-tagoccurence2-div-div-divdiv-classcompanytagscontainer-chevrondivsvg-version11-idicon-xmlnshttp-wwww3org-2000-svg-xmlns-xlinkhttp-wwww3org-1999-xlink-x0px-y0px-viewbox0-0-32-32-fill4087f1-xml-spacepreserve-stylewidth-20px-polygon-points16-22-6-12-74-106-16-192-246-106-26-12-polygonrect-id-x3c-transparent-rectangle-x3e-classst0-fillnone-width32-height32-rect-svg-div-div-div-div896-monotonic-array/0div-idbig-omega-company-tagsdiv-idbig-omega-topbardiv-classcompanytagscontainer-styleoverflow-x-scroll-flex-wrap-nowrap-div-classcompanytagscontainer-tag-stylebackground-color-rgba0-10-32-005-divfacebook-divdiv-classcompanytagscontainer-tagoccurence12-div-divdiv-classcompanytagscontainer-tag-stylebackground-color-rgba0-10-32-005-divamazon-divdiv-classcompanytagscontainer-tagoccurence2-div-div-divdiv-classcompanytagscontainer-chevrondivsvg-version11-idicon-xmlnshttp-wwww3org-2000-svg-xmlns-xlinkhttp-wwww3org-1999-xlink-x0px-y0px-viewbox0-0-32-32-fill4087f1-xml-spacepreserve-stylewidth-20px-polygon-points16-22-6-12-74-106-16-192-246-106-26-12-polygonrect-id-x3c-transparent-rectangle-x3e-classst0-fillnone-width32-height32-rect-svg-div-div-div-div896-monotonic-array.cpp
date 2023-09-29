class Solution {
public:
    bool isMonotonic(vector<int>& a) {
        int inc=true,dec=true;
        for(int i=0;i<a.size()-1;i++){
            if(a[i]>a[i+1]) inc=false;
            if(a[i]<a[i+1]) dec=false;
            if(inc==false && dec==false)    return false;
        }
        return true;
    }
};