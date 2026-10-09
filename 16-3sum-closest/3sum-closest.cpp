class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int closest_sum=nums[0]+nums[1]+nums[2];
        
        for(int i=0;i<=n-3;i++){
            int j=i+1;
            int k=n-1;
            
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(target-closest_sum)){
                    closest_sum=sum;
                }
                if(sum<target){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return closest_sum;
    }
};