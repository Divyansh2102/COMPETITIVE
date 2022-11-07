class Solution {
public:
    int maximum69Number (int num) {
        vector<int>v;
        int temp=num;
        while(temp){
            v.push_back(temp%10);
            temp/=10;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==6){
                v[i]=9;
                break;
            }
        }
        int j=0;
        num=0;
        for(int i=v.size()-1;i>=0;i--){
            num+=v[i]*pow(10,j);
            j++;
        }
        return num;
    }
};