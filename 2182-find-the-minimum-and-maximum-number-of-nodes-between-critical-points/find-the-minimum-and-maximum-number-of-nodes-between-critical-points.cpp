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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> result;
        vector<int> track;
        // if(head==NULL ||head->next==NULL|| head->next->next==NULL){
        //     result.push_back(-1);
        //     result.push_back(-1);
        //     return result;
        // }
        ListNode*curr = head->next;
        ListNode*prev = head;
        int count=2;
        while(curr->next!=NULL){
            if((prev->val<curr->val) && (curr->val>curr->next->val)){
                track.push_back(count);
            }
            if((prev->val>curr->val) && (curr->val<curr->next->val)){
                track.push_back(count);
            }
            curr=curr->next;
            prev=prev->next;
            count++;
        }
        int n = track.size();
        if(n<2){
            result.push_back(-1);
            result.push_back(-1);
            return result;
        }
        int min_dist = INT_MAX;
        int max_dist = track[n-1] - track[0];

        for(int i = 1; i < n; i++){
            min_dist = min(min_dist, track[i] - track[i-1]);
        }
        result.push_back(min_dist);
        result.push_back(max_dist);
        return result;
    }
};