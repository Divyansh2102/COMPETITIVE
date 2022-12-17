class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<long long int>st;
        int i=0;
        while(i<tokens.size()){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="/" || tokens[i]=="-"){
                long int a=st.top();
                st.pop();
                long int b=st.top();
                st.pop();
                long long int res=0;
                if(tokens[i]=="+")
                    res=b+a;
                else if(tokens[i]=="-")
                    res=b-a;
                else if(tokens[i]=="*")
                    res=b*a;
                else
                    res=b/a;
                st.push(res);
            }
            else
                st.push(stoi(tokens[i]));

            i++;
        }
        return st.top();
        
        // string t = tokens.back();
        // tokens.pop_back();
        // if(t != "+" && t != "-" && t != "*" && t != "/") return stoi(t);
        // else{
        //     long long int b = evalRPN(tokens);
        //     long long int a = evalRPN(tokens);
        //     if(t == "+") return a + b;
        //     else if(t == "-") return a - b;
        //     else if(t == "*") return a * b;
        //     else return a / b;
        // }
    }
};

