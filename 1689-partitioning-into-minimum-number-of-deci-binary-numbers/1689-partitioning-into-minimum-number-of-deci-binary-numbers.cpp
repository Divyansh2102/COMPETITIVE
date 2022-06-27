class Solution {
public:
    int minPartitions(string n) {
        int max=-1;
        for(int i=0;i<n.size();i++){
            char x=n[i];
            if(((int)x) - ((int)'0')>max)
                max=((int)x) - ((int)'0');
        }
        return max;
    }
};