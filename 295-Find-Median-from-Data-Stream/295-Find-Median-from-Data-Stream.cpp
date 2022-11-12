class MedianFinder {
public:
    priority_queue<int>max_heap;
    priority_queue<int,vector<int>,greater<int>>min_heap;
    MedianFinder() {
        
    }
    void addNum(int num) {
        if(max_heap.empty() && min_heap.empty())
            max_heap.push(num);
        else{
            if(max_heap.top()<num){
                min_heap.push(num);
            }
            else
                max_heap.push(num);
        }
        int n=max_heap.size();
        int m=min_heap.size();
        if(n-m==2 || n-m==-2){
            if(n>m){
                int ele=max_heap.top();
                max_heap.pop();
                min_heap.push(ele);
            }
            else{
                int ele=min_heap.top();
                min_heap.pop();
                max_heap.push(ele);
            }
        }
    }
    
    double findMedian() {
        int n=max_heap.size();
        int m=min_heap.size();
        if((n+m)%2==0)
           return ((double)min_heap.top()+(double)max_heap.top())/2.0;
        if(n>m)
            return max_heap.top();
        return min_heap.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */