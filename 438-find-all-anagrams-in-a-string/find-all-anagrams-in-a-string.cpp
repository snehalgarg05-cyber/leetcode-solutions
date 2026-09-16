class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(),m = p.size();
        
        vector<int> freq1(26,0);
        vector<int> freq2(26,0);
        vector<int> result;
        if(n<m){
            return result;
        }
        for(int i=0;i<m;i++){
            freq1[s[i]-'a']++;
            freq2[p[i]-'a']++;
        }
        if(freq1==freq2){
            result.push_back(0);
        }
        for(int i=m;i<n;i++){
            freq1[s[i-m]-'a']--;
            freq1[s[i]-'a']++;
            if(freq1==freq2){
                result.push_back(i-m+1);
            }
        }
        return result;
    }
};