class Solution {
public:
    bool isBalanced(string num) {
        int n = num.size();
        int odd_sum=0,even_sum=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                even_sum+=num[i]-'0';
            }
            else{
                odd_sum+=num[i]-'0';
            }
        }
        if(odd_sum==even_sum){
            return true;
        }
        return false;
    }
};