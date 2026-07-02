// class Solution { //BRUTE FORCE:-TLE
// public:
//     int numberOfSubstrings(string s) {
//         int n = s.size();
        
//         int count=0;
//         for(int i=0;i<n;i++){
//             vector<int> freq(3,0);
//             for(int j=i;j<n;j++){
//                 freq[s[j]-'a']++;
//                 if(freq[0]>0 && freq[1]>0 && freq[2]>0){
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };


class Solution { //OPTIMAL:-SLIDING WINDOW
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int result=0;
        vector<int> freq(3,0);
        int start=0,end=0;
        while(end<n){
            char ch = s[end];
            freq[ch-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0){
                result+=n-end;
                freq[s[start]-'a']--;
                start++;
            }
            end++;
        }
        return result;
    }
};
























