class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        vector<int> freq(200001, 0);

        for(int x : nums)
            freq[x]++;

        int ans = 0;

        for(int i = 0; i < 200000; i++) {

            if(freq[i] > 1) {

                int extra = freq[i] - 1;

                ans += extra;

                freq[i + 1] += extra;
                freq[i] = 1;
            }
        }

        return ans;
    }
};