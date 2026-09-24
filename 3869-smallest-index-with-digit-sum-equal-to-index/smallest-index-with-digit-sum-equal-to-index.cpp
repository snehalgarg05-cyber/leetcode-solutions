class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int sum=0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            sum=0;
            int digit = nums[i];
            while(digit>0){
                int digi = digit%10;
                sum+=digi;
                digit/=10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};