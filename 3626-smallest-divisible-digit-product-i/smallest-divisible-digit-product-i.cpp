class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<INT_MAX;i++){
            int product=1;
            int nums = i;
            while(nums>0){
                product*=nums%10;
                nums/=10;
            }
            if(product%t==0){
                return i;
                break;
            }
        }
        return 0;
    }
};