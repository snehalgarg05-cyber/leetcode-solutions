class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n = s.size();
        int start=0,end=0,max_len=0;
        int f_count=0;
        while(end<n){
            if(s[end]=='F'){
                f_count++;
            }
            while(f_count>k){
                if(s[start]=='F'){
                    f_count--;
                }
                start++;
            }
            max_len=max(max_len,end-start+1);
            end++;
        }
        int max_len2=0;
        int start2=0,end2=0;
        int t_count=0;
        while(end2<n){
            if(s[end2]=='T'){
                t_count++;
            }
            while(t_count>k){
                if(s[start2]=='T'){
                    t_count--;
                }
                start2++;
            }
            max_len2=max(max_len2,end2-start2+1);
            end2++;
        }
        int ans = max(max_len,max_len2);
        return ans;
    }
};