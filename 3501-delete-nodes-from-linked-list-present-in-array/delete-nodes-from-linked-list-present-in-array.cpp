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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }
        ListNode*curr=head,*prev=NULL,*fut=NULL;
        while(curr==head && st.find(curr->val)!=st.end()){
            head=head->next;
            curr=head;
        }
        while(curr){
            fut=curr->next;
            if(st.find(curr->val)!=st.end()){
                prev->next=curr->next;
                curr=fut;
            }
            else{
                prev=curr;
                curr=fut;
            }
        }
        return head;
    }
};











