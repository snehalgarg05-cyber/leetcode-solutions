class Solution {
public:
    string reverseParentheses(string s) {
        int n = s.size();
        stack<int> st;
        vector<int> match(n);
        // Matching brackets ke indexes store karo
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                st.push(i);
            } else if (s[i] == ')') {
                int j = st.top();
                st.pop();

                match[i] = j;
                match[j] = i;
            }
        }
        string ans;
        int direction = 1;
        for (int i = 0; i >= 0 && i < n; i += direction) {
            if (s[i] == '(' || s[i] == ')') {
                i = match[i];
                direction = -direction;
            } else {
                ans += s[i];
            }
        }
        return ans;
    }
};