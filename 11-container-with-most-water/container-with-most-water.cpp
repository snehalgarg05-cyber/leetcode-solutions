class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int start=0,end=n-1;
        int max_area=INT_MIN;
        while(start<=end){
            int width = end-start;
            int area = min(height[start],height[end])*width;
            max_area=max(area,max_area);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return max_area;
    }
};