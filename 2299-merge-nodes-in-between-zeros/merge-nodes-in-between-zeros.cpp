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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*temp=head;
        int sum=0;
        vector<int> result;
        while(temp){
            if(temp->val!=0){
                sum+=temp->val;
            }
            else{
                if(sum==0){
                    temp=temp->next;
                    continue;
                }
                else{
                    result.push_back(sum);
                    sum=0;
                }
            }
            temp=temp->next;
        }
        reverse(result.begin(),result.end());
        int n = result.size();
        ListNode*Head=NULL;
        for(int i=0;i<n;i++){
            if(Head==NULL){
                ListNode*temp = new ListNode(result[i]);
                Head = temp;
            }
            else{
                ListNode*temp = new ListNode(result[i]);
                temp->next=Head;
                Head = temp;
            }
        }
        return Head;
    }
};