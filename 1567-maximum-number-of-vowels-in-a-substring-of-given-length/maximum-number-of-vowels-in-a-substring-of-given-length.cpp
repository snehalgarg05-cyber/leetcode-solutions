class Solution {
public:

    bool isVowel(char ch){
        return ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u';
    }

    int maxVowels(string s, int k) {
        int vow_cnt=0,cnt=0;
        int n = s.size();
        int start=0,end=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i])){
                cnt++;
            }
        }
        vow_cnt = max(vow_cnt,cnt);
        for(int i=k;i<n;i++){
            if(isVowel(s[i-k])){
                cnt--;
            }
            if(isVowel(s[i])){
                cnt++;
            }
            vow_cnt = max(vow_cnt,cnt);
        }
        return vow_cnt;
    }
};