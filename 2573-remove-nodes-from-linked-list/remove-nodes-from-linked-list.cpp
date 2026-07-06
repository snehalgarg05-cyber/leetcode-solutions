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
    ListNode* removeNodes(ListNode* head) {
        stack<int> st;
        ListNode*curr=head;
        while(curr){
            if(st.empty()){
                st.push(curr->val);
                
            }
            else if(!st.empty() && st.top()>curr->val){
                st.push(curr->val);
            }
            else{
                while(!st.empty() && st.top()<curr->val){
                st.pop();
                }
                st.push(curr->val);
            }
            curr=curr->next;
        }
        ListNode*ans= new ListNode(st.top());
        st.pop();
        while(!st.empty()){
            ListNode*temp = new ListNode(st.top());
            st.pop();
            temp->next=ans;
            ans=temp;
        }
        return ans;
    }
};