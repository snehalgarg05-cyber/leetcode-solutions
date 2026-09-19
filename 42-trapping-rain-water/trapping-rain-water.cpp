class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
        int n = height.size();
        int left_maxi=0,right_maxi=0;
        vector<int> left_max(n),right_max(n);
        for(int i=0;i<n;i++){
            left_maxi = max(left_maxi,height[i]);
            left_max[i]=left_maxi;
        }
        for(int i=n-1;i>=0;i--){
            right_maxi = max(right_maxi,height[i]);
            right_max[i]=right_maxi;
        }
        for(int i=0;i<n;i++){
            ans+=min(right_max[i],left_max[i])-height[i];
        }
        return ans;
    }
};