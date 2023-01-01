class Solution {
public:
    double average(vector<int>& salary) {
        double mini=INT_MAX;
        double maxi=INT_MIN;
        double sum=0;
        double n=salary.size();
        for(int i=0;i<n;i++){
            if(salary[i]>maxi)
                maxi=salary[i];
            if(salary[i]<mini)
                mini=salary[i];
            sum+=salary[i];
        }
        sum=sum-mini-maxi;
        return sum/(n-2);
    }
};