class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {
        vector<int>count(10,0);
        for(auto i:d)
            count[i]++;
        vector<int>res;
        for(int i=100;i<999;i+=2){
            vector<int>c_count(10,0);
            int temp=i;
            while(temp){
                c_count[temp%10]++;
                temp/=10;
            }
            bool flag=true;
            for(int i=0;i<10;i++){
                if(c_count[i]>count[i]){
                    flag=false;
                    break;
                }
            }
            if(flag)
                res.push_back(i);
        }
        return res;
    }
};