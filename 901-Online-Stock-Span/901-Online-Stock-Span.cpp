class StockSpanner {
public:
    stack<pair<int,int>>st;
    StockSpanner() {
        
    }
    int next(int price) {
        int count=0;
        while(st.empty()==false && st.top().first<=price){
            count+=st.top().second;
            st.pop();
        }
        count++;
        st.push({price,count});
        return count;
    }
};