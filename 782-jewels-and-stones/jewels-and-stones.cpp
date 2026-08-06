class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        vector<int> freq(256,0);
        int n = jewels.size();
        for(int i=0;i<n;i++){
            freq[jewels[i]]++;
        }
        for(int i=0;i<stones.size();i++){
            if(freq[stones[i]]!=0){
                count++;
            }
        }
        return count;
    }
};