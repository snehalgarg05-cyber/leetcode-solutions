class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<double,vector<double>,greater<double>> p;
        vector<int>ans;
        int n = arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                p.push((double)arr[i]/arr[j]);
            }
        }
        while(--k){
            p.pop();
        }
        double result=p.top();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(result==(double)arr[i]/arr[j]){
                    ans.push_back(arr[i]);
                    ans.push_back(arr[j]);
                    break;
                }
            }
        }
        return ans;
    }
};