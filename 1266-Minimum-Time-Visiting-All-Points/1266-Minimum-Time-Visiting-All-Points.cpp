class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int ans=0;
        int n=points.size();
        for(int i=1;i<n;i++){
            int res=0;
            int a=points[i][0]-points[i-1][0];
            int b=points[i][1]-points[i-1][1];
            res=max(abs(a),abs(b));
            ans+=res;
        }
        return ans;
    }
};

/*
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int c=0;
        int s1=points[0][0],s2=points[0][1];
        for(int i=1;i<points.size();i++){
            int a=points[i][0],b=points[i][1];
            while(s1!=a || s2!=b){
                if(s1==a && s2>b)
                    s2--;
                    
                else if(s1==a && s2<b)
                    s2++;
                    
                else if(s1>a && s2==b)
                    s1--;
                   
                else if(s1<a && s2==b)
                    s1++;
                    
                else if(s1>a && s2>b)
                    s1--,s2--;
                    
                else if(s1<a && s2<b)
                    s1++,s2++;
                
                else if(s1>a && s2<b)
                    s1--,s2++;
                
                else
                    s1++,s2--;
                   
                c++;
            }
        }
        return c;
    }
};
*/