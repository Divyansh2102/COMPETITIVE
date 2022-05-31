class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = (dividend < 0 && divisor > 0) || (divisor < 0 && dividend > 0) ? false:true;
        
        long long int _dividend = abs((long long int)dividend);
        long long int _divisor = abs((long long int)divisor);

        long long int res = 0;
        
        while (_dividend >= _divisor)
        {
            long long int tmp_divisor = _divisor;
            long long int mul = 1;
            while(_dividend >= tmp_divisor)
            {
                res += mul;
                mul += mul; 
                _dividend -= tmp_divisor; 
                tmp_divisor += tmp_divisor; 
            }
        }
        res = sign ? res: -res;
        res = res > 2147483647 ? 2147483647 : res;
        res = res < -2147483648 ? -2147483648 : res;

        return (int)res;
    }
};