class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        int total_sum = 0;

        for(int x : arr){
            total_sum += x;
        }

        if(total_sum % 3 != 0){
            return false;
        }

        int target_sum = total_sum / 3;

        int curr_sum = 0;
        int count = 0;

        for(int i = 0; i < arr.size(); i++){

            curr_sum += arr[i];

            if(curr_sum == target_sum){
                count++;
                curr_sum = 0;
            }
        }

        return count >= 3;
    }
};