class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        double n=salary.size();
        sort(salary.begin(),salary.end());
        for(int i=0;i<n;i++){
            sum+=salary[i];
        }
        sum=sum-salary[0]-salary[n-1];
        return sum/(n-2);
    }
};