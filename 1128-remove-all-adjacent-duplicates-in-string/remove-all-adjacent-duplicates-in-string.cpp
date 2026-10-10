class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        stack<char> st;
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string s1(st.size(),' ');
        int i = st.size()-1;
        while(!st.empty()){
            s1[i]=st.top();
            i--;
            st.pop();
        }
        return s1;
    }
};