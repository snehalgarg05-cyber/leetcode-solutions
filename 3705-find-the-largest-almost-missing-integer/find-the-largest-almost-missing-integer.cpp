class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        unordered_map<int,int> mp;
        for(int i=0;i<k;i++){ 
            if(mp.find(nums[i])==mp.end()){
                mp[nums[i]]++;
            }
             //first window
        }
        int start=1,end=k;
        while(end<n){
            for(int i=start;i<=end;i++){
                mp[nums[i]]++;
            }
            start++,end++;
        }
        int max_element=-1;
        bool flag=false;
        for(auto&m:mp){
            if(m.second==1){
                flag=true;
                if(m.first>max_element){
                    max_element=m.first;
                }
            }
        }
        if(flag){
            return max_element;
        }
        return -1;
    }
};