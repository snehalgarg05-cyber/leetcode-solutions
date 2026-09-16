class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        int n = s.size();
        for(int i=0;i<n;i++){
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                result.push_back(s[i]);
            }
        }
        int start=0,end=result.size()-1;
        int m = result.size();
        while(start<=end){
            if(result[start]!=result[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
};