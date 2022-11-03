//Approach 1 :-
class Solution {
public:
    int gcd(int a,int b){
        if(a==0)
            return b;
        if(b==0)
            return a;
        if(a==b)
            return a;
        if(a>b)
            return gcd(a-b,a);
        return gcd(a,b-a);
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int great=nums[n-1];
        return gcd(small,great);
    }
};

//Approach 2:-
class Solution {
public:
    int gcd(int a,int b){
        if(b==0)
            return a;
        return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int great=nums[n-1];
        return gcd(great,small);
    }
};