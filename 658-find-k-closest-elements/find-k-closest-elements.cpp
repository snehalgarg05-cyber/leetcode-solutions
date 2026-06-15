// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         vector<int> ans;
//         int n = arr.size();
//         priority_queue<
//     pair<int,int>,
//     vector<pair<int,int>>,
//     greater<pair<int,int>>
// > pq;
//         for(int i=0;i<n;i++){
//             pq.push({abs(arr[i]-x),arr[i]});
//         }
//         while(k--){
//             ans.push_back(pq.top().second);
//             pq.pop();
//         }
//         sort(ans.begin(),ans.end());
//         return ans;
//     }
// };


class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<k;i++){
            pq.push({abs(arr[i]-x),arr[i]});
        }
        for(int i=k;i<n;i++){
            if(pq.top().first>abs(arr[i]-x)){
                pq.pop();
                pq.push({abs(arr[i]-x),arr[i]});
            }
        }
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};







