// class Solution { // mempry limit exceeded
// public:
//     vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

//         int n = nums1.size();
//         int m = nums2.size();
//         priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

//         vector<vector<int>> ans;
//         for(int i=0;i<n;i++){
//             for(int j=0;j<m;j++){
//                 pq.push(make_pair((nums1[i]+nums2[j]),make_pair(nums1[i],nums2[j])));
//             }
//         }
//         while(k--){
//             ans.push_back({pq.top().second.first,pq.top().second.second});
//             pq.pop();
//         }
//         return ans;
//     }
// };

class Solution { 
public:
    typedef pair<int,pair<int,int>> P;

    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<P,vector<P>,greater<P>> pq;

        int m = nums1.size();
        int n = nums2.size();

        int sum = nums1[0]+nums2[0];
        pq.push({sum,{0,0}});

        vector<vector<int>> result;
        set<pair<int,int>> visited;
        visited.insert({0,0});

        while(k-- && !pq.empty()){
            auto temp = pq.top();
            pq.pop();
            int i = temp.second.first;
            int j = temp.second.second;
            result.push_back({nums1[i],nums2[j]});
            
            // push (i,j+1) if possible
            if(j+1<n && visited.find({i,j+1})==visited.end()){
                pq.push({nums1[i]+nums2[j+1],{i,j+1}});
                visited.insert({i,j+1});
            }
            // push(i+1,j) if possible
            if(i+1<m && visited.find({i+1,j})==visited.end()){
                pq.push({nums1[i+1]+nums2[j],{i+1,j}});
                visited.insert({i+1,j});
            }
        }
        return result;
    }
};

























