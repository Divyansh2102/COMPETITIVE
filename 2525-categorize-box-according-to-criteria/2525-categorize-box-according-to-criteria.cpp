class Solution {
public:
    string categorizeBox(int l, int w, int h, int m) {
        long long dcheck=1e4,vcheck=1e9;
        if(l>=dcheck || w>=dcheck || h>=dcheck || m>=dcheck || (long long)((long long)l*(long long)w*(long long)h)>=vcheck){
            if(m>=100)  return "Both";
            return "Bulky";
        }
        else if(m>=100){
            return "Heavy";
        }
        else return "Neither";
        return "";
    }
};