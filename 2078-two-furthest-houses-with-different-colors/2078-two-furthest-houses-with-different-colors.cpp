class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int i=0,n=colors.size(),j=n-1;
        while(colors[j]==colors[0]) j--;
        while(colors[i]==colors[n-1])   i++;
        return max(j,n-1-i);
    }
};