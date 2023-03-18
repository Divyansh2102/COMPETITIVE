class BrowserHistory {
public:
    vector<string>s;
    int cur;
    BrowserHistory(string homepage) {
        s.push_back(homepage);
        cur=0;
    }
    
    void visit(string url) {
        s.erase(s.begin()+cur+1,s.end());
        s.push_back(url);
        cur+=1;
    }
    
    string back(int steps) {
        cur=max(0,cur-steps);
        return s[cur];
    }
    
    string forward(int steps) {
        int x=s.size()-1;
        cur=min(x,cur+steps);
        return s[cur];
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */