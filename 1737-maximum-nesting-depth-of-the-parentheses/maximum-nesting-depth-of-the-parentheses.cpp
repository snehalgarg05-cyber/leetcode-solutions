class Solution {
public:
    int maxDepth(string s) {
        int n = s.size();
        int max_count=0,count=0;
        stack<char> st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
                count++;
            }
            if(s[i]==')'){
                max_count = max(max_count, static_cast<int>(st.size()));
                st.pop();
                count=0;
            }
        }
        return max_count;
    }
};