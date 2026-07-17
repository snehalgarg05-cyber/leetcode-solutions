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
    bool isPalindrome(ListNode* head) {
        if(head==NULL|| head->next==NULL){
            return true;
        }
        vector<int> result;
        ListNode*curr=head;
        while(curr){
            result.push_back(curr->val);
            curr=curr->next;
        }
        int n = result.size();
        int start=0,end=n-1;
        while(start<=end){
            if(result[start]!=result[end]){
                return false;
            }
            start++,end--;
        }
        return true;
    }
};