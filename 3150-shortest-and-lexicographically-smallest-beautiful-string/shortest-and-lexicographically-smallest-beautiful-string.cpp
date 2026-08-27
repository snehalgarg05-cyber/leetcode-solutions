class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        
        for(int len = k;len<=n;len++){
            string result="";
            for(int start=0;start<=n-len;start++){
                int count_one=0;
                string temp = s.substr(start,len);
                for(char &ch : temp){
                    count_one+=(ch=='1')?1:0;
                }
                if(count_one==k){
                    if(result.empty() || temp<result){
                        result=temp;
                    }
                }
            }
            if(!result.empty()){
                return result;
            }
        }
        
        return "";
    }
};