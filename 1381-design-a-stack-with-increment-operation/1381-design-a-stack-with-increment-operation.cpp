class CustomStack {
public:
    vector<int>st;
    int sz=0;
    CustomStack(int maxSize) {
        sz=maxSize;
    }
    
    void push(int x) {
        if(st.size()<sz)    st.push_back(x);
    }
    
    int pop() {
        if(st.empty())  return -1;
        else{
            int x=st[st.size()-1];
            st.pop_back();
            return x;
        }
    }
    
    void increment(int k, int val) {
        int x=0;
        while(k-- && x<st.size()){
            st[x++]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */