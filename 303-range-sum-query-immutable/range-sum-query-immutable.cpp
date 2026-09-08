// class NumArray {
//     vector<int>arr;  //humne ek khali vector liya arr;
// public:
//     NumArray(vector<int>& nums) {
//         arr=nums; //we are copying all the elements from nums array to arr array.
        
//     }
    
//     int sumRange(int left, int right) {
//         int sum=0;
//         for(int i=left;i<=right;++i){
//             sum+=arr[i];
//         }
//         return sum;
//     }
//};
#include <vector>

class NumArray {
private:
    vector<int> prefix;  // Prefix sum array

public:
    NumArray(vector<int>& nums) {
        int n = nums.size();
        prefix.resize(n);
        
        // Build prefix sum array
        prefix[0] = nums[0];
        for(int i = 1; i < n; i++) {
            prefix[i] = prefix[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0) {
            return prefix[right];
        }
        return prefix[right] - prefix[left-1];
    }
};

