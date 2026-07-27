// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {//approach 1
//         int n = nums.size();
//         sort(nums.begin(),nums.end());
//         return (nums[n-1]-1)*(nums[n-2]-1);
        
//     }
// };

class Solution {
public:
    int maxProduct(vector<int>& nums){
        int n = nums.size();
        int largest=INT_MIN,second_largest=INT_MIN;
        for(int &num:nums){
            if(num>largest){
                second_largest=largest;
                largest=num;
            }
            else if(num>second_largest){
                second_largest=num;
            
            }
        }
        return (largest-1)*(second_largest -1);
        
    }
};