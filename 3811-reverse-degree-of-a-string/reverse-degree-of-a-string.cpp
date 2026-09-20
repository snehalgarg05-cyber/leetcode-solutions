// class Solution {
// public:
//     int reverseDegree(string s) {
//         int n = s.size();
//         string result = "abcdefghijklmnopqrstuvwxyz";
//         unordered_map<char,int> mp;
//         int j=0;
//         for(int i=26;i>0;i--){
//             mp[result[j]]=i;
//             j++;
//         }
//         int ans=0;
//         for(int i=0;i<n;i++){
//             ans+=mp[s[i]]*(i+1);
//         }
//         return ans;
//     }
// };


class Solution {
public:
    int reverseDegree(string s) {
        int ans = 0, n = s.size();
        for (int i = 0; i < n; i++) {
            ans += (26 - s[i] + 'a') * (i + 1);
        }
        return ans;
    }
};