class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>st(n);
        for(int i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0)   st[i]="FizzBuzz";
            else if((i+1)%3==0)  st[i]="Fizz";
            else if((i+1)%5==0) st[i]="Buzz";
            
            else st[i]=to_string(i+1);
        }
        return st;
    }
};