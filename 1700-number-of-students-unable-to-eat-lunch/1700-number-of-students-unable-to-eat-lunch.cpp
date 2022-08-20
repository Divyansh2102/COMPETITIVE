class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sand) {
        queue<int>q;
        stack<int>s;
        reverse(sand.begin(),sand.end());
        for(auto i:sand)
            s.push(i);
        for(auto i:st)
            q.push(i);
        int c=0;
        while(!s.empty()){
            if(s.top()==q.front()){
                s.pop();
                q.pop();
                c=0;
            }
            else{
                int temp=q.front();
                q.pop();
                q.push(temp);
                c++;
                if(c>=q.size())
                    break;
            }
        }
        return s.size();
    }
};