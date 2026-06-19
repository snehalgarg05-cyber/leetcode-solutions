class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max_alt=0;
        int compare=0;
        for(int i=0;i<gain.size();i++){
            compare+=gain[i];
            max_alt=max(max_alt,compare);
        }
        return max_alt;
    }
};