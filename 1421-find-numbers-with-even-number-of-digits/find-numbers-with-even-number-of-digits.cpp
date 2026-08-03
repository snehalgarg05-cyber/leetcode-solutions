class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count=0;
        int dig_count=0;
        for(int i=0;i<n;i++){
            while(nums[i]>0){
                dig_count++;
                nums[i]/=10;
            }
            if(dig_count%2==0){
                count++;
            }
            dig_count=0;
        }
        return count;
    }
};