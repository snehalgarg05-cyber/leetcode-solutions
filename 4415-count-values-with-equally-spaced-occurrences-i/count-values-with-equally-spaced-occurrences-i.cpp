class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        int count=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[nums[i]]==3){
                int i1=i,i2=0,i3=0,first=0;
                for(int j=i+1;j<n;j++){
                    if(nums[j]==nums[i] && first==0){
                        i2=j;
                        first++;
                        break;
                    }
                }
                for(int j=i+1;j<n;j++){
                    if(nums[j]==nums[i] && first==1){
                        i3=j;
                    }
                }
                if(i2-i1==i3-i2){
                    count++;
                }
            }
        }
        return count;
    }
};