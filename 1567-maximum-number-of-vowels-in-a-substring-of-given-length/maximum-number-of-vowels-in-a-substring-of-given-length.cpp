// class Solution {
// public:

//     bool isVowel(char ch){
//         return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';
//     }

//     int maxVowels(string s, int k) {

//         int n = s.size();

//         // edge case
//         if(n==0 || k==0) return 0;

//         int maxCount = 0;

//         // check every substring of length k
//         for(int i=0; i<=n-k; i++){

//             int count = 0;

//             for(int j=i; j<i+k; j++){

//                 if(isVowel(s[j])){
//                     count++;
//                 }
//             }

//             maxCount = max(maxCount, count);
//         }

//         return maxCount;
//     }
// };

class Solution {
    public:

        bool isVowels(char &ch){
            return ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u';

        }

        int maxVowels(string s, int k)
        {
            int n=s.size();
            int i=0, j=0, count=0, maxV=0;
            while(j<n){
                if(isVowels(s[j])){
                    count++;
                }
                if(j-i+1==k){
                    maxV= max(maxV, count);
                    if(isVowels(s[i])){
                        count--;
                    }
                    i++;
                }
                j++;
            }
            return maxV;
            
        } 
};
