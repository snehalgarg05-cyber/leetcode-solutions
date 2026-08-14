class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        unordered_map<char,int> mp;
        int start=0,end=0;
        int length=0;
        while(end<n){
            mp[s[end]]++;
            while(mp[s[end]]>2){
                mp[s[start]]--;
                start++;
            }
            length = max(length,end-start+1);
            end++;
        }
        return length;
    }
};