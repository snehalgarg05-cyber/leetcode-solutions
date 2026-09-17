class Solution {
public:
    char findTheDifference(string s, string t) {
        string result="";
        vector<int> freq(26,0);
        int n = s.size();
        int m = t.size();
        for(int i=0;i<m;i++){
            freq[t[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            freq[s[i]-'a']--;
        }
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                result.push_back('a'+i);
            }
        }
        return result[0];
    }
};