/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode*curr=head;
        stack<int> st;
        int count=0;
        vector<int> ans;
        while(curr){
            count++;
            ans.push_back(curr->val);
            curr=curr->next;
        }
        vector<int> result(count,0);
        curr=head;
        for(int i=0;i<count;i++){
            if(st.empty()){
                st.push(i);
            }
            else if(!st.empty() && ans[st.top()]>ans[i]){
                st.push(i);
            }
            else{
                while(!st.empty() && ans[st.top()]<ans[i]){
                    result[st.top()]=ans[i];
                    st.pop();
                }
                st.push(i);
            }
        }
        return result;
    }
};













