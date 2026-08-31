class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> count(501,0);
        int n = nums.size();
        for(int i=0;i<n;i++){
            count[nums[i]]++;
        }
        for(int i=0;i<501;i++){
            if(count[i]%2==1){
                return false;
            }
        }
        return true;
    }
};