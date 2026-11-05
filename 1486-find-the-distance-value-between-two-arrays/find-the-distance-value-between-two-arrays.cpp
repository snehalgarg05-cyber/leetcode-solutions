class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        int n = arr1.size(),m = arr2.size();
        
        for(int i=0;i<n;i++){
            bool flag= false;
            for(int j=0;j<m;j++){
                if(arr1[i]!=arr2[j] && abs(arr1[i]-arr2[j])>d){
                    flag=true;
                }
                else{
                    flag=false;
                    break;
                }
                
            }
            if(flag){
                count++;
            }
        }
        return count;
    }
};