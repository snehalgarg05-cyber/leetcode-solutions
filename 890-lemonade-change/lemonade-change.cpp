class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        int count_five=0,count_ten=0,count_twenty=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                count_five++;
            }
            else if(bills[i]==10){
                if(count_five<=0){
                    return false;
                }
                else{
                    count_five--;
                    count_ten++;
                }
            }
            else{
                if(count_five>=1 && count_ten>=1){
                    count_five--,count_ten--;
                }
                else if(count_five>=3 && count_ten<=0){
                    count_five-=3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};