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
    ListNode* rotateRight(ListNode* head, int k) {
        vector<int> result;
        ListNode*curr=head;
        if(head==NULL||head->next==NULL){
            return head;
        }
        while(curr){
            result.push_back(curr->val);
            curr=curr->next;
        }
        int n = result.size();
        k=k%n;
        reverse(result.begin(), result.end());
        reverse(result.begin(),result.begin()+k);
        reverse(result.begin()+k,result.end());
        ListNode*temp=NULL;
        for(int i=n-1;i>=0;i--){
            if(temp==NULL){
                temp = new ListNode(result[i]);
            }
            else{
                ListNode*temp2 = new ListNode(result[i]);
                temp2->next=temp;
                temp=temp2;
            }
        }
        return temp;
    }
};