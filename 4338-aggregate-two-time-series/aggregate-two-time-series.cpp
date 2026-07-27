class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int n = series1.size();
        int m = series2.size();
        vector<vector<int>> result;
        int i=0,j=0;
        while(i<n && j<m){
            int t1 = series1[i][0];
            int t2 = series2[j][0];
            if(t1<t2){
                result.push_back({t1,series1[i][1]+series2[j][1]});
                i++;
            }
            else if(t1>t2){
                result.push_back({t2,series1[i][1]+series2[j][1]});
                j++;
            }
            else{
                result.push_back({t2,series1[i][1]+series2[j][1]});
                i++,j++;
            }
        }
        while(i<n){
            result.push_back({series1[i][0],series1[i][1]});
            i++;
        }
        while(j<m){
            result.push_back({series2[j][0],series2[j][1]});
            j++;
        }
        return result;
    }
};