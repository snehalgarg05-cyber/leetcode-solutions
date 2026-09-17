class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int> count(100001,0);
        int n = nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=1;i<100001;i++){
            if(count[i]>1){
                return i;
            }
        }
        return 0;
    }
};