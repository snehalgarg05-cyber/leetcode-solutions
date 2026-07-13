class Solution {
public:

    bool isVowel(char ch){
        if(ch=='a'| ch=='e' | ch=='i' | ch=='o'|ch=='u'){
            return true;
        }
        return false;
    }

    vector<int> vowelStrings(vector<string>& s, vector<vector<int>>& queries) {
        vector<int> result;
        vector<int> prefix;
        int n = s.size();
        for(int i=0;i<n;i++){
            int m = s[i].size();
            if(isVowel(s[i][0]) && isVowel(s[i][m-1])){
                prefix.push_back(1);
            }
            else{
                prefix.push_back(0);
            }
        }
        int k = queries.size();
        vector<int> pref;
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=prefix[i];
            pref.push_back(sum);
        }

        for(int i=0;i<k;i++){
            int l = queries[i][0];
            int r = queries[i][1];

            if(l == 0)
                result.push_back(pref[r]);
            else
                result.push_back(pref[r] - pref[l-1]);
        }
        return result;
    }
};