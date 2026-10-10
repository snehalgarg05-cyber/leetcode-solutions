// class Solution {//brute force
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         for(int i=0;i<n;i++){
//             if(arr[i]>arr[i+1]){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };

class Solution {//binary search
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int start=0,end=n-1,mid;
        while(start<=end){
            mid= end + (start-end)/2;//to avoid memeory overflow
            //finding peak element

            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
                return mid;
            }
            else if(arr[mid]>arr[mid-1]){//moving right side
                start=mid+1;
            }
            else{//movinf left side
                end=mid-1;
            }
        }
        return -1;
    }
};














