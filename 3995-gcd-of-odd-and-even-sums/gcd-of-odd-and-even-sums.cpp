class Solution {
public:
    int gcd(int a,int b){
        if(b==0){
            return a;
        }
        return gcd(b,a%b);
    }

    int gcdOfOddEvenSums(int n) {
        int odd_sum=0,even_sum=0;
        int i=1;
        int count1=1;
        while(count1<=n){
            count1++;
            odd_sum+=i;
            i+=2;
        }
        int j=2;
        int count2=1;
        while(count2<=n){
            count2++;
            even_sum+=j;
            j+=2;
        }
        
        int ans = gcd(odd_sum,even_sum);
        return ans;
    }
};


// int odd_sum = 0;
// int even_sum = 0;

// for(int i=1;i<=n;i++){  //by for loop logic
//     odd_sum += (2*i - 1);
//     even_sum += (2*i);
// }

// return gcd(odd_sum, even_sum);