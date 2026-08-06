class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        vector<int> freq(256,0);
        int start=0,end=0;
        int max_len=0;
        while(end<n){
            freq[s[end]]++;
            while(freq[s[end]]>1){
                freq[s[start]]--;
                start++;
            }
            
            max_len=max(max_len,end-start+1);
            end++;
        }
        return max_len;
    }
};