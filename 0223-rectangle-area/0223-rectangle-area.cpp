class Solution {
public:
    int computeArea(int a, int b, int c, int d, int e, int f, int g, int h) {
        long int area1=((long)c-(long)a)*((long)d-(long)b);
        long int area2=((long)g-(long)e)*((long)h-(long)f);
        long int cx1=max(a,e),cy1=max(b,f);
        long int cx2=min(c,g),cy2=min(h,d);
        long int cl=cx2-cx1;
        long int ch=cy2-cy1;
        long int area=0;
        if(cl>0 && ch>0)
            area=cl*ch;
        return (int)(area1+area2-area);
    }
};