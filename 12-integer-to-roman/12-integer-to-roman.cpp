class Solution {
public:
    string intToRoman(int num) {
        string s="";
        unordered_map<int,string>st;
        st[1000]="M";
        st[900]="CM";
        st[500]="D";
        st[400]="CD";
        st[100]="C";
        st[90]="XC";
        st[50]="L";
        st[40]="XL";
        st[10]="X";
        st[9]="IX";
        st[5]="V";
        st[4]="IV";
        st[1]="I";
        vector<int>val{1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(auto v:val){
            while(num>=v){
                s+=st[v];
                num-=v;
            }
        }
        return s;
    }
};