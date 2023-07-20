class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n=a.size();
        stack<int>st;
        for(int i=0;i<n;i++){
            if(a[i]>0)  st.push(a[i]);
            else{
                int f=1;
                while(st.size()){
                    if(st.top()<0)  break;
                    else if(st.top()<abs(a[i])) st.pop();
                    else if(st.top()==abs(a[i])){
                        st.pop();
                        f=0;
                        break;
                    }
                    else{
                        f=0;
                        break;
                    }
                }
                if(f)   st.push(a[i]);
            }
        }
        a.clear();
        while(st.size()){
            a.push_back(st.top());
            st.pop();
        }
        reverse(a.begin(),a.end());
        return a;
    }
};
