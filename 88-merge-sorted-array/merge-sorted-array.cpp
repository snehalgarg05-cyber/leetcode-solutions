class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int start1=0,start2=0;
        vector<int> result;
        while(start1<m&& start2<n){
            if(nums1[start1]<nums2[start2]){
                result.push_back(nums1[start1]);
                start1++;
            }
            else{
                result.push_back(nums2[start2]);
                start2++;
            }
        }
        while(start1<m){
            result.push_back(nums1[start1]);
            start1++;
        }
        while(start2<n){
            result.push_back(nums2[start2]);
            start2++;
        }
        for(int i=0;i<m+n;i++){
            nums1[i]=result[i];
        }
    }
};