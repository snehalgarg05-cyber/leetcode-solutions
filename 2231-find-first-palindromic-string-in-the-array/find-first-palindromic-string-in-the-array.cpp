class Solution {
public:
    string firstPalindrome(vector<string>& s) {
        int n = s.size();
        for(int i=0;i<n;i++){
            int start=0,end=s[i].size()-1;
            bool found=true;
            while(start<=end){
                if(s[i][start]!=s[i][end]){
                    found=false;
                    break;
                }
                start++,end--;
            }
            
            if(found){
                return s[i];
            }
        }
        return "";
    }
};