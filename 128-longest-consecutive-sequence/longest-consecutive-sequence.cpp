// class Solution {//tle due to for loop from mini to maxi
// public:
//     int longestConsecutive(vector<int>& nums) {
//         int n = nums.size();
//         if(n==0){
//             return 0;
//         }
//         unordered_map<int,int> mp;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
//         int mini = *min_element(nums.begin(),nums.end());
//         int maxi = *max_element(nums.begin(),nums.end());
//         int max_count=0,count=0;
//         for(int i=mini;i<=maxi;i++){
//             if(mp.find(i)!=mp.end()){
//                 count++;
                
//             }
//             else{
//                 count=0;
//             }
//             max_count=max(max_count,count);
//         }
//         return max_count;
//     }
// };

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int max_count = 0;

        for(int x : st) {

            // x sequence ka starting element hai
            if(st.find(x - 1) == st.end()) {

                int current = x;
                int count = 1;

                while(st.find(current + 1) != st.end()) {
                    current++;
                    count++;
                }

                max_count = max(max_count, count);
            }
        }

        return max_count;
    }
};