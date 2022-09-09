class Solution {
public:
    bool check(int a[26],int b[26]){
        for(int i=0;i<26;i++){
            if(a[i]!=b[i])
                return 0;
        }
        return 1;
    }
    bool checkInclusion(string s1, string s2) {
        // unordered_map<char,int> mp,window;
        // int n1 = s1.size(),n2 = s2.size();
        // if(n1>n2) return false;
        // for(int i=0; i<n1 ; i++){
        //     mp[s1[i]]++;
        //     window[s2[i]]++;
        // }
        // if(window == mp)return true;
        // int k=0;
        // for(int i=n1 ; i<n2 ; i++){
        //    if(window[s2[k]] == 1) window.erase(s2[k]);
        //     else window[s2[k]]--;
        //     window[s2[i]]++;
        //     k++;
        //     if(mp == window) return true;
        // }
        // return false;
        int count1[26]={0};
        for(int i=0;i<s1.length();i++)
            count1[s1[i]-'a']++;
        int i=0;
        int winS=s1.length();
        int count2[26]={0};
        while(i<winS && i<s2.length()){
            count2[s2[i]-'a']++;
            i++;
        }
        if(check(count1,count2))
            return 1;
        while(i<s2.length()){
            count2[s2[i]-'a']++;
            count2[s2[i-winS]-'a']--;
            i++;
            if(check(count1,count2))
            return 1;
        }
        return false;
    }
};