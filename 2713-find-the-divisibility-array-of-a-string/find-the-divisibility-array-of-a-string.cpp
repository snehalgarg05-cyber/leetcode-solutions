class Solution {
public:
    vector<int> divisibilityArray(string word, int m) {
        vector<int> result;

        long long rem = 0;

        for(int i = 0; i < word.size(); i++) {
            int digit = word[i] - '0';

            rem = (rem * 10 + digit) % m;

            if(rem == 0)
                result.push_back(1);
            else
                result.push_back(0);
        }

        return result;
    }
};