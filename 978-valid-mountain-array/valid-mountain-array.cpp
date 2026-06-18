class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return false;
        }
        if(arr[0]>arr[1]){
            return false;
        }
        int max_index=max_element(arr.begin(),arr.end())-arr.begin();
        for(int i=0;i<max_index;i++){
            if(arr[i+1]<=arr[i]){
                return false;
            }
            if(i+1==n-1){
                return false;
            }
        }
        for(int i=max_index;i<n-1;i++){
            if(arr[i+1]>=arr[i]){
                return false;
            }
            
        }
        return true;
    }
};