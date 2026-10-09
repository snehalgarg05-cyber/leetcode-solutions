class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string result="";
        for(int i=0;i<n;i++){
            s[i]= tolower(s[i]);
        }
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                result.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        int m = result.size();
        int start=0,end=m-1;
        while(start<=end){
            if(result[start]!=result[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
};