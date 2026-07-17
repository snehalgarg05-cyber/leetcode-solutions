class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        int n = s.size();
        int m = p.size();
        vector<int> freq_p(26,0);
        vector<int> freq_s(26,0);
        vector<int> result;
        if(p.size()>s.size()){
            return result;   
        }
        for(int i=0;i<m;i++){
            freq_p[p[i]-'a']++;
            freq_s[s[i]-'a']++;
        }
        if(freq_p==freq_s){
            result.push_back(0);
        }
        int start=0,end=m;
        while(end<n){
            freq_s[s[end]-'a']++;
            freq_s[s[start]-'a']--;
            if(freq_s==freq_p){
                result.push_back(start+1);
            }
            start++,end++;
        }
        return result;
    }
};