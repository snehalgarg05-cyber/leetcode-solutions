class Solution {
public:

    bool isVowel(char c){
        string Vowels="aeiouAEIOU";
        return Vowels.find(c) != string::npos;
    }

    string sortVowels(string s) {
        int n = s.size();
        int count=0;
        vector<char> ans;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                ans.push_back(s[i]);
            }
        }
        sort(ans.begin(),ans.end());
        int index=0;
        for(int i=0;i<n;i++){
            if(isVowel(s[i])){
                s[i]=ans[index];
                index++;
            }
            else{
                continue;
            }
        }
        return s;
    }
};