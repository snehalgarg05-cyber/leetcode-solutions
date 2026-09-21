class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        set<int> st;
        for(auto&m:mp){
            st.insert(m.second);
        }
        if(mp.size()==st.size()){
            return true;
        }
        return false;
    }
};