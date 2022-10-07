class MyCalendarThree {
public:
    map<int,int>mp;
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        int c=0,ans=0;
        mp[start]++;
        mp[end]--;
        for(auto i:mp){
            c+=i.second;
            ans=max(ans,c);
        }
        return ans;
    }
};