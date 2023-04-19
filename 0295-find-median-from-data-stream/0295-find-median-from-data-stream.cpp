class MedianFinder {
public:
    priority_queue<int>maxheap;
    priority_queue<int,vector<int>,greater<int>>minheap;
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        if(maxheap.empty() && minheap.empty())  maxheap.push(num);
        else{
            if(num>maxheap.top())   minheap.push(num);
            else    maxheap.push(num);
        }
        int n=minheap.size();
        int m=maxheap.size();
        if(abs(n-m)==2){
            if(n>m){
                int ele=minheap.top();
                minheap.pop();
                maxheap.push(ele);
            }
            else{
                int ele=maxheap.top();
                maxheap.pop();
                minheap.push(ele);
            }
        }
    }
    
    double findMedian() {
        int n=minheap.size();
        int m=maxheap.size();
        
        if((n+m)%2==0){
            return ((double)minheap.top()+(double)maxheap.top())/2.0;
        }
        else{
            if(n>m) return (double)minheap.top();
            else    return (double)maxheap.top();
        }
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */