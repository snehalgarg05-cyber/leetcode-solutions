class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string> mp;
        unordered_set<string> used;
        stringstream ss(s);
        string word;
        for(char ch: pattern){
            if(!(ss>>word)) return false;

            if(mp.find(ch)!=mp.end()){
                if(mp[ch] != word) return false;
            }
            else{
                if(used.count(word)) return false;
                mp[ch] = word;
                used.insert(word);
            }
        }
        if(ss>>word) return false;  //for remaining words
        return true;
    }
};