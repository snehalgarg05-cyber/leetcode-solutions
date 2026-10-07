/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*A = headA;
        unordered_set<ListNode*> visited;
        ListNode*B = headB;
        while(A){
            visited.insert(A);
            A=A->next;
        }
        while(B){
            if(visited.find(B)!=visited.end()){
                return B;
            }
            B=B->next;
        }
        return NULL;
    }
};