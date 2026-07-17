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
// class Solution {
// public:
//     ListNode* swapNodes(ListNode* head, int k) {//sc-o(n);
//         vector<int> result;
//         ListNode*curr=head;
//         while(curr){
//             result.push_back(curr->val);
//             curr=curr->next;
//         }
//         int n = result.size();
//         swap(result[k-1],result[n-k]);
//         reverse(result.begin(),result.end());
//         ListNode*Head=NULL;
//         for(int i=0;i<n;i++){
//             if(Head==NULL){
//                 Head=new ListNode(result[i]);
//             }
//             else{
//                 ListNode*temp = new ListNode(result[i]);
//                 temp->next=Head;
//                 Head=temp;
//             }
//         }
//         return Head;
//     }
// };

// class Solution {//optimal but sc=o(3n)
// public:
//     ListNode* swapNodes(ListNode* head, int k) {
//         ListNode*curr=head;
//         int count=0;
//         while(curr){
//             count++;
//             curr=curr->next;
//         }
//         curr=head;
//         int j =k-1;
//         ListNode*node1=head,*node2=head;
//         while(j--){
//             curr=curr->next;
//         }
//         node1=curr;
//         curr=head;
//         int last=count-k;
//         while(last--){
//             curr=curr->next;
//         }
//         node2=curr;
//         swap(node1->val,node2->val);
//         return head;
//     }
// };

class Solution {//optimal but sc=0(n)only
public:
    ListNode* swapNodes(ListNode* head, int k) {

        ListNode* p1 = NULL;
        ListNode* p2 = NULL;

        ListNode* temp = head;

        while(temp != NULL) {

            if(p2 != NULL) {
                p2 = p2->next;
            }

            k--;

            if(k == 0) {
                p1 = temp;
                p2 = head;
            }

            temp = temp->next;
        }

        swap(p1->val, p2->val);

        return head;
    }
};






























