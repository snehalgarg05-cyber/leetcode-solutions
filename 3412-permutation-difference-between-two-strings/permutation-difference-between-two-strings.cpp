class Solution {
public:
    int findPermutationDifference(string s, string t) {
        unordered_map<char,int> a,b;
        int n = s.size();
        for(int i=0;i<n;i++){
            a[s[i]]=i;
            b[t[i]]=i;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=abs(a[s[i]]-b[s[i]]);
        }
        return ans;
    }
};