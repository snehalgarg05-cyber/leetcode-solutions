class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int start=0,end=0;
        int max_len=0;
        unordered_map<char,int> mp;
        while(end<n){
            mp[s[end]]++;
            while(mp[s[end]]>1){
                mp[s[start]]--;
                start++;
            }
            max_len=max(max_len,end-start+1);
            end++;
        }
        return max_len;
    }
};