class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>st;
        vector<int>ans;
        for(int i=0;i<a.size();i++){
            if(a[i]>0)  st.push(a[i]);
            else if(a[i]<0){
                bool k=true;
                while(st.size()){
                    if(st.top()<0)  break;
                    else if(st.top()<abs(a[i]))  st.pop();
                    else if(st.top()==abs(a[i])){
                        k=false;
                        st.pop();
                        break;
                    }
                    else{
                        k=false;
                        break;
                    }
                }
                if(k)   st.push(a[i]);
            }
        }
        while(st.size()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};