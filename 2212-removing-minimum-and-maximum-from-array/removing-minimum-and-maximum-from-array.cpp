class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();

        if(n==1){
            return 1;
        }

        int maxi=max_element(nums.begin(),nums.end())-nums.begin();
        int mini=min_element(nums.begin(),nums.end())-nums.begin();

        int a=max(maxi,mini)+1;
        int b=n-min(maxi,mini);
        int c=(maxi+1)+(n-mini);
        int d=(mini+1)+(n-maxi);

        return min({a,b,c,d});
    }
};