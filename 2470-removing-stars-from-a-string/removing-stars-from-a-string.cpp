class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        int n = s.size();
        for(int i=0;i<n;i++){
            if(st.empty()){
                st.push(s[i]);
            }
            else if(!st.empty() && s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        string s1(st.size(),' ');
        int i=s1.size()-1;
        while(!st.empty()){
            s1[i]=st.top();
            i--;
            st.pop();
        }
        return s1;
    }
};