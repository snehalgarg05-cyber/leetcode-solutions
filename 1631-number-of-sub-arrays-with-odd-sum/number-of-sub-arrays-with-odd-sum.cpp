class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int result=0;
        int n = arr.size();
        long long evencnt=1,oddcnt=0;
        long long pref=0;
        long long mod = 1000000007;
        for(int i=0;i<n;i++){
            pref+=arr[i];
            int parity = pref%2;
            if(parity==1){
                oddcnt++;
                result = (result + evencnt)%mod;
            }
            else{
                evencnt++;
                result = (result + oddcnt)%mod;
            }
        }
        return result;
    }
};