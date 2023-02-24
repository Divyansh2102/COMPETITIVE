class MyStack {
public:
    queue<int>qu;
    MyStack() {
        
    }
    
    void push(int x) {
        qu.push(x);
        int i=0;
        while(i<qu.size()-1){
            int y=qu.front();
            qu.pop();
            qu.push(y);
            i+=1;
        }
    }
    
    int pop() {
        int x=qu.front();
        qu.pop();
        return x;
    }
    
    int top() {
        return qu.front();
    }
    
    bool empty() {
        return qu.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */