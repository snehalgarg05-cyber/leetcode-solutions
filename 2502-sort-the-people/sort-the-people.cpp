class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        set<pair<int,string>> s;
        int n = heights.size();

        for(int i = 0; i < n; i++){
            s.insert({heights[i], names[i]});
        }

        vector<string> result;

        for(auto it = s.rbegin(); it != s.rend(); it++){
            result.push_back(it->second);
        }

        return result;
    }
};