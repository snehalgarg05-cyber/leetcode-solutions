class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        vector<int> freq(26,0);
        int count = n/2;
        for(int i=0;i<count;i++){
            freq[s[i]-'a']++;
        }
        string ans;
        for(int i=0;i<26;i++){
            while(freq[i]!=0){
                char ch = i+'a';
                ans.push_back(ch);
                freq[i]--;
            }
        }
        string result;
        if(n%2==0){
            result+=ans;
            reverse(ans.begin(),ans.end());
            result+=ans;
        }
        else{
            result+=ans;
            reverse(ans.begin(),ans.end());
            result.push_back(s[count]);
            result+=ans;
        }
        return result;
    }
};