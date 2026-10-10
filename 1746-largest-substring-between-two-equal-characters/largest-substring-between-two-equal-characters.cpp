class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        int max_len=-1;
        for(int i=0;i<n;i++){
            if(mp.find(s[i])!=mp.end()){
                max_len = max(max_len,i-mp[s[i]]-1);
            }
            else{
                mp[s[i]]=i;
            }
        }
        return max_len;
    }
};