class Solution {
public:
    int maxScore(vector<int>& card, int k) {
        int n = card.size();
        int left_sum=0;
        for(int i=0;i<k;i++){
            left_sum+=card[i];
        }
        int max_sum=left_sum;
        int right_sum=0;
        for(int i=k-1;i>=0;i--){
            left_sum-=card[i];
            right_sum+=card[n-(k-i)];
            max_sum = max(max_sum,left_sum+right_sum);
        }
        return max_sum;
    }
};