// class Solution { //brute force approach :- order of n cube
// public:
//     string shortestBeautifulSubstring(string s, int k) {
//         int n = s.size();
        
//         for(int len = k;len<=n;len++){
//             string result="";
//             for(int start=0;start<=n-len;start++){
//                 int count_one=0;
//                 string temp = s.substr(start,len);
//                 for(char &ch : temp){
//                     count_one+=(ch=='1')?1:0;
//                 }
//                 if(count_one==k){
//                     if(result.empty() || temp<result){
//                         result=temp;
//                     }
//                 }
//             }
//             if(!result.empty()){
//                 return result;
//             }
//         }
        
//         return "";
//     }
// };

class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int start=0,end=0;
        string result = "";
        int one_cnt=0;
        while(end<n){
            if(s[end]=='1'){
                one_cnt++;
            }
            while(one_cnt>k || s[start]=='0'){
                if(s[start]=='1'){
                    one_cnt--;
                }
                start++;
            }
            if(one_cnt==k){
                string temp = s.substr(start,end-start+1);
                if(result.empty() || result.size()>end-start+1 || (result.size()==temp.size() && temp<result)){
                    result = temp;
                }
            }
            end++;
        }
        return result;
    }
};





























