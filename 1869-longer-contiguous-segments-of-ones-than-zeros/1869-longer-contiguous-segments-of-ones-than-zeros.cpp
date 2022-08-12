class Solution {
public:
    bool checkZeroOnes(string s) {
       int maxONE=0, maxZERO=0;

    int count1=0, count0=0;
    
    for(char c: s)
    {
        if(c=='1')
        {
            count1++;
            maxONE=max(maxONE, count1);
            count0=0;
        }
        else
            
        {
            count0++;
            maxZERO=max(maxZERO, count0);
            count1=0;
        }
    }
    if(maxONE>maxZERO)
    {
        return true;
    }
    
    return false;
}
};