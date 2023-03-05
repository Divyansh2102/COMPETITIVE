class Twitter {
public:
    int cnt=0;
    priority_queue<vector<int>>pq;
    unordered_map<int,set<int>>mp;
    Twitter() {
        cnt=0;
        mp.clear();
        pq=priority_queue<vector<int>>();
    }
    
    void postTweet(int userId, int tweetId) {
        pq.push({cnt++,tweetId,userId});    
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<int>ans;
        int n=0;
        priority_queue<vector<int>>temp=pq;
        while(n<10 && !temp.empty()){
            auto t=temp.top();
            temp.pop();
            if(t[2]==userId || mp[userId].count(t[2])){
                ans.push_back(t[1]);
                n+=1;
            }
        }
        return ans;
    }
    
    void follow(int followerId, int followeeId) {
        mp[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        mp[followerId].erase(followeeId);
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */
